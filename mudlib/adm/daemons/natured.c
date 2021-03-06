// natured.c
// music 12.13
#define TIME_TICK (time()*60)
#include <localtime.h>
#include <ansi.h>


static int current_day_phase;
mapping *day_phase;

string *weather_msg = ({
	"天空中万里无云",
	"几朵淡淡的云彩妆点著清朗的天空",
	"白云在天空中飘来飘去",
	"厚厚的云层堆积在天边",
	"天空中乌云密布",
});
string *bad_weather=({
	"受干旱的影响，$N亏空",
	"由于暴雨袭击，$N收成跌了",
	"$N遭到了倭寇的袭击，被劫",
	"官府加重对$N的征税，$N亏空",
	"疾病在$N肆虐，损失达",
	"龙卷风袭卷了$N，结果造成损失",
	"$N突发地震，人员伤亡惨重，花费了",
});

mapping *read_table(string file);
void init_day_phase();

void create()
{
	day_phase = read_table("/adm/etc/nature/day_phase");
	init_day_phase();
}

void init_day_phase()
{
	mixed *local;
	int i, t;

	// Get minutes of today.
local = localtime(TIME_TICK);
	t = local[2] * 60 + local[1];		// hour * 60 + minutes

	// Find the day phase for now.
	for( i=0; i < sizeof(day_phase); i++)
		if( t >= day_phase[i]["length"] )
			t -= (int)day_phase[i]["length"];
		else
			break;

	current_day_phase = (i==0? sizeof(day_phase)-1: i - 1);

	// Since in our time scale, 1 minute == 1 second in RL, so we don't need
	// any conversion before using this number as call_out dalay, if you 
	// changed the time scale, be sure to convert it.

	call_out("update_day_phase",
		(int)day_phase[(current_day_phase+1) % sizeof(day_phase)]["length"] - t);
}

void update_day_phase()
{
	remove_call_out("update_day_phase");

	current_day_phase = (++current_day_phase) % sizeof(day_phase);
	switch (day_phase[current_day_phase]["outcolor"])
        {
              case "BLK":
                   message("channel:chat", HIG"【窗外】"BLK + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "RED":
                   message("channel:chat", HIG"【窗外】"RED + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "HIR":
                   message("channel:chat", HIG"【窗外】"HIR + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "GRN":
                   message("channel:chat", HIG"【窗外】"GRN + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "HIG":
                   message("channel:chat", HIG"【窗外】"HIG + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "YEL":
                   message("channel:chat", HIG"【窗外】"YEL + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "HIY":
                   message("channel:chat", HIG"【窗外】"HIY + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "BLU":
                   message("channel:chat", HIG"【窗外】"BLU + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "HIB":
                   message("channel:chat", HIG"【窗外】"HIB + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "MAG":
                   message("channel:chat", HIG"【窗外】"MAG + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "HIM":
                   message("channel:chat", HIG"【窗外】"HIM + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "CYN":
                   message("channel:chat", HIG"【窗外】"CYN + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "HIC":
                   message("channel:chat", HIG"【窗外】"HIC + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "WHT":
                   message("channel:chat", HIG"【窗外】"WHT + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              case "HIW":
                   message("channel:chat", HIG"【窗外】"HIW + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
              default:
                   message("channel:chat", HIG"【窗外】"HIG + day_phase[current_day_phase]["time_msg"] + "\n"NOR, users());
                   break;
        }
//	message("outdoor:vision", day_phase[current_day_phase]["time_msg"] + "\n", users());
	if( !undefinedp(day_phase[current_day_phase]["event_fun"]) )
		call_other(this_object(), day_phase[current_day_phase]["event_fun"]);

	call_out("update_day_phase", day_phase[current_day_phase]["length"]);
}

void event_midnight()
{
        string get_month, get_day;
get_day = CHINESE_D->chinese_monthday(TIME_TICK);
get_month = CHINESE_D->chinese_month(TIME_TICK);
        switch(get_month)
        {
                //spring weather
                case "三":
                case "四":
                case "五":
                     switch(random(3))
                     {
                        case 0:
                           day_phase = read_table("/adm/etc/nature/spring_rain");
                           break;
                        case 1:
                           day_phase = read_table("/adm/etc/nature/spring_sun");
                           break;
                        case 2:
                           day_phase = read_table("/adm/etc/nature/spring_wind");
                           break;
                     }
                     break;
                //summer weather
                case "六":
                case "七":
                case "八":
                     switch(random(3))
                     {
                        case 0:
                           day_phase = read_table("/adm/etc/nature/summer_rain");
                           break;
                        case 1:
                           day_phase = read_table("/adm/etc/nature/summer_sun");
                           break;
                        case 2:
                           day_phase = read_table("/adm/etc/nature/summer_wind");
                           break;
                     }
                     break;
                //autumn weather
                case "九":
                case "十":
                case "十一":
                     switch(random(3))
                     {
                        case 0:
                           day_phase = read_table("/adm/etc/nature/autumn_rain");
                           break;
                        case 1:
                           day_phase = read_table("/adm/etc/nature/autumn_sun");
                           break;
                        case 2:
                           day_phase = read_table("/adm/etc/nature/autumn_wind");
                           break;
                     }
                     break;
                //winter weather
                case "十二":
                case "一":
                case "二":
                     switch(random(3))
                     {
                        case 0:
                           day_phase = read_table("/adm/etc/nature/winter_rain");
                           break;
                        case 1:
                           day_phase = read_table("/adm/etc/nature/winter_sun");
                           break;
                        case 2:
                           day_phase = read_table("/adm/etc/nature/winter_wind");
                           break;
                     }
                     break;
                default:
                     day_phase = read_table("/adm/etc/nature/day_phase");
        }
}

// This is called everyday noon by update_day_phase, defined in the
// "event_fun" field in /adm/etc/nature/day_phase
// This is called everyday noon by update_day_phase, defined in the
// "event_fun" field in /adm/etc/nature/day_phase
void event_sunrise()
{
message("channel:chat", HIY +"【闲聊】太监：皇上早朝，文武百官靓见！\n"+ NOR, users());
}
void event_noon()
{
	object *ob;
        int i, skill,con,con1,con2,con3;
        string get_month,ill,msg;
get_month = CHINESE_D->chinese_month(TIME_TICK);
        switch(get_month)
        {
                case "三":
                case "四":
                case "五":
                     ill = "ill_kesou";
                     msg = HIG + "忽然喉头一阵痕痒，你感觉似乎要咳嗽了。\n" + NOR;
                     break;
                case "六":
                case "七":
                case "八":
                     ill = "ill_zhongshu";
                     msg = HIG+"突然你胸臆之间一阵翻腾，你中暑了。\n" + NOR;
                     break;
                case "九":
                case "十":
                case "十一":
                     ill = "ill_shanghan";
                     msg = HIG+"陡的你打了个冷战，头昏沉沉的，你得伤寒病了。\n"+NOR;
                     break;
                case "十二":
                case "一":
                case "二":
                     ill = "ill_dongshang";
                     msg = HIG+"你肢体末端一阵僵直，看来你被冻伤了。\n"+NOR;
                     break;
        }
        if(random(2))
        {
                ill = "ill_fashao";msg = HIG+"你偶感风寒，竟而发起烧来。\n"+NOR;
        }
        ob = users();
        for(i=0; i<sizeof(ob); i++)
        {
                if( !environment(ob[i]) ) continue;
                if( !environment(ob[i])->query("outdoors") ) continue;
                if( ob[i]->query("age")==14 ) continue;
con1 = ob[i]->query("kee");
 con2 = ob[i]->query("max_kee");
                (int)con = con1/con2*50;//形成第一个生病判断条件
con3 = ob[i]->query("force");
con2 = ob[i]->query("max_force");
		if( con2 == 0) con2 = 1;
                (int)con1 = con3/con2*50;//形成第二个生病判断条件
                if(random(con)+random(50)+random(con1)<25)
                {
                        ob[i]->apply_condition(ill, 10);
                        tell_object(ob[i], msg);
                }
        }
message("channel:chat", HIY +"【闲聊】太监：时至午正，皇上退朝，文武百官下殿！\n"+ NOR, users());
}

void event_afternoon()
{
	object area,lp;
	mixed *dir;
	int count,j;
	string *item,bad_area;
	int bad_money;
	int i=1,last;
	mapping data=([]);
	int kaifa,jizhi,area_money,npc_money;
	object *users;
	string file,str;
	int money;
	string *npc_banghui=({"明教","日月教","丐帮","天地会"});

	dir=get_dir("/data/area/",0);
	if(! dir)       dir=({});
// get the bad area
	if( sizeof(dir)>=30)	bad_area=dir[random(sizeof(dir))];
	else	bad_area="";
	if(sscanf(bad_area,"%s.o",bad_area)!=1)	bad_area="";
// end
	area=new("/obj/area");
        for(i=0;i<sizeof(dir);i++)      {
                if(sscanf(dir[i],"%s.o",file)==1)       {
		area->create(file);
		area_money=area->query("money");
		if(! intp(area_money))	area_money=0;
		kaifa=area->query("kaifa");
		if(! intp(kaifa))	kaifa=0;
		jizhi=area->query("jizhi");
		if(! intp(jizhi))	jizhi=0;
		if(file==bad_area)	{
			if(jizhi&& kaifa<60)	{
				bad_area=file;
				bad_money=(kaifa+1)*jizhi*10;
				area_money-=bad_money;
			}
			else	{
				bad_area="";
				area_money+=(kaifa/2+random(kaifa/2)+1)*jizhi*10;
			}
		}
		else
		area_money+=(kaifa/2+random(kaifa/2)+1)*jizhi*10;

		data[area->query("banghui")]+=area_money;
		area->set("money",0);
		area->set("last_money",area_money);
		area->save();
		}
	}

	destruct(area);

// set all banghui's money include npc_money & area_money
	dir=get_dir("/data/guild/",0);
	if(! dir)	dir=({});
	lp=new("/obj/lingpai");
	for(i=0;i<sizeof(dir);i++)      {
	        if(sscanf(dir[i],"%s.o",file)==1)       {
		lp->create(file);
		npc_money=lp->query("npc_money");
		lp->set("npc_money_last",npc_money);
		lp->set("area_money_last",data[file]);
		lp->set("npc_money",0);
		data[file]+=npc_money;
		if(data[file]<0)	data[file]=0;
		data[file]/=2;
		lp->set("money",data[file]);
		lp->set("bangzhu_money",data[file]);
		lp->save();
		}
	}
	destruct(lp);

// give all online player banghui's money
	users=users();
	if(arrayp(users))	{
	item=keys(data);
	for(i=0;i<sizeof(item);i++)	{
		count=0;
		for(j=0;j<sizeof(users);j++)	{
			if(! users[j]->query("banghui") ||
			users[j]->query("banghui")!=item[i])
				continue;
			count++;
		}
		if(count==0)	count=1;
		data[item[i]]/=count;
	}
	for(i=0;i<sizeof(users);i++)	{
		if(! objectp(users[i])) continue;
		if(! users[i]->query("banghui"))	continue;
		if(member_array((string)users[i]->query("banghui"),npc_banghui)!=-1)	{
		money=(int)users[i]->query("score");
		if(money<50)	money=1;
		else if(money<100)	money=100;
		if(money>20000)	money=20000;
		data[users[i]->query("banghui")]=money;
	}
                if(! data[users[i]->query("banghui")])  continue;
		tell_object(users[i],"「"+users[i]->query("banghui")+"」"+
		"发饷，你的帐上增加了"+MONEY_D->money_str(data[users[i]->query("banghui")])+"！\n");
		users[i]->add("balance",data[users[i]->query("banghui")]);
	}
	if(bad_area=="")	{
		message("channel:rumor",YEL"【谣言】某人：各地盘收入良好。\n"NOR,users());
	}
	else	{
		str=bad_weather[random(sizeof(bad_weather))];
		str=replace_string(str,"$N",bad_area);
		message("channel:rumor",YEL"【谣言】某人："+
		str+MONEY_D->money_str(bad_money)+"！\n"NOR,users());
	}
	for(i=0;i<sizeof(users);i++)	{
	if((int)users[i]->query("balance")>100000000)	{
		users[i]->set("balance",100000000);
		tell_object(users[i],RED"你在钱庄的钱已达到一万两黄金，快点花吧！\n"NOR);
	}
	}
	}
}

string outdoor_room_description()
{
	return "    " + day_phase[current_day_phase]["desc_msg"] +"。\n";
}
string outdoor_room_outcolor()
{
        return day_phase[current_day_phase]["outcolor"];
}

string game_time()
{
	return CHINESE_D->chinese_date(TIME_TICK);
}

// This function is to read a regular type of data table for day_phase and
// etc.
mapping *read_table(string file)
{
	string *line, *field, *format;
	mapping *data;
	int i, rn, fn;

	line = explode(read_file(file), "\n");
	data = ({});
	for(i=0; i<sizeof(line); i++) {
		if( line[i]=="" || line[i][0]=='#' ) continue;
		if( !pointerp(field) ) {
			field = explode( line[i], ":" );
			continue;
		}
		if( !pointerp(format) ) {
			format = explode( line[i], ":" );
			continue;
		}
		break;
	}

	for( rn = 0, fn = 0; i<sizeof(line); i++) {
		if( line[i]=="" || line[i][0]=='#' ) continue;
		if( !fn ) data += ({ allocate_mapping(sizeof(field)) });
		sscanf( line[i], format[fn], data[rn][field[fn]] );
		fn = (++fn) % sizeof(field);
		if( !fn ) ++rn;
	}
	return data;
}


mapping *query_day_phase() { return day_phase; }
