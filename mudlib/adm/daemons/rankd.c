// rankd.c
// music 12.13

#include <ansi.h>

string query_rank(object ob)
{
	if( ob->is_ghost() ) return HIB "【 孤魂野鬼 】" NOR;
// New rank 
  if(wizardp(ob)) return HIY"【 铁血守护神 】"NOR;
    if(!ob->query("mingwang"))  ob->set("mingwang",0);

    if(ob->query("mingwang")> 1000000) return HIW "【 武林泰斗 】" NOR;        
    if(ob->query("mingwang")> 100000) return HIW "【 名满天下 】" NOR;
    if(ob->query("mingwang")> 10000) return HIW "【 名动一时 】" NOR;
    if(ob->query("mingwang")> 1000) return HIW "【 武林新秀 】" NOR;
    if(ob->query("mingwang")> 100) return HIW "【 小有名声 】" NOR;
    if(ob->query("mingwang")> 10) return HIW "【 走上侠道 】" NOR;

    if(ob->query("mingwang")< -1000000) return HIY "【 当世魔头 】" NOR;
    if(ob->query("mingwang")< -100000) return HIY "【 恶名昭著 】" NOR;
    if(ob->query("mingwang")< -10000) return HIY "【 恶霸一方 】" NOR;
    if(ob->query("mingwang")< -1000) return HIY "【 恶名远扬 】" NOR;
    if(ob->query("mingwang")< -100) return HIY "【 小有恶名 】" NOR;
    if(ob->query("mingwang")< -10) return HIY "【 误入岐途 】" NOR;
    return  "【 初入江湖 】" NOR;

	switch(ob->query("gender")) {
	case "女性":
		switch(wizhood(ob)) {
			case "(admin)":		return HIW "【 玄  女 】" NOR;
			case "(arch)":		return HIY "【 女  神 】" NOR;
			case "(wizard)":	return HIG "【 仙  女 】" NOR;
			case "(apprentice)":	return HIC "【 小仙女 】" NOR;
			case "(immortal)":	return HIC "【 女仙童 】" NOR;
			default:
				if( ((int)ob->query("PKS") > 100) &&
		        ((int)ob->query("PKS") > (int)ob->query("MKS")) )
					return "【 女魔头 】";
				switch(ob->query("class")) {
//					case "bonze":		return "【 尼  姑 】";
//					case "taoist":		return "【 女  冠 】";
//					case "bandit":		return "【 女飞贼 】";
//					case "dancer":		return "【 舞  妓 】";
//					case "scholar":		return "【 才  女 】";
//					case "officer":		return "【 女  官 】";
//					case "fighter":		return "【 女武者 】";
//					case "swordsman":	return "【 女剑士 】";
//					case "alchemist":	return "【 方  士 】";
//					case "shaman":		return "【 巫  医 】";
//					case "beggar":		return "【 叫化子 】";
                   case "heshang":     return "【 尼  姑 】";
                   case "nigu":        return "【 尼  姑 】";
                   case "daoshi":      return "【 道  士 】";
                   case "jianke":      return "【 剑  客 】";
                   case "shusheng":    return "【 书  生 】";
                   case "langzi":      return "【 浪  子 】";
                   case "youxia":      return "【 游  侠 】";
                   case "shashou":     return "【 杀  手 】";
                   case "jiaohua":     return "【 叫  花 】";
                   case "xiake":       return "【 侠  客 】";
                   default:            return "【 平  民 】";

			}
		}
	default:
                if(ob->query("id")=="musix")    return  "【 顾  问 】" ;
                if(ob->query("id")=="wsong")    return  "【 顾  问 】" ;
		switch(wizhood(ob)) {
                       
			case "(admin)":		return  "【 浪  子 】" ;
			case "(arch)":		return HIY "【 天  神 】" NOR;
			case "(wizard)":	return HIG "【 神  仙 】" NOR;
			case "(apprentice)":	return HIC "【 小神仙 】" NOR;
			case "(immortal)":	return HIC "【 小神童 】" NOR;
			default:
				if( ((int)ob->query("PKS") > 100) &&
					((int)ob->query("PKS") > (int)ob->query("MKS")) )
					return "【 大魔头 】";
				switch(ob->query("class")) {
//					case "bonze":		return "【 僧  人 】";
//					case "taoist":		return "【 道  士 】";
//					case "bandit":		return "【 盗  贼 】";
//					case "scholar":		return "【 书  生 】";
//					case "officer":		return "【 官  差 】";
//					case "fighter":		return "【 武  者 】";
//					case "swordsman":	return "【 剑  士 】";
//					case "alchemist":	return "【 方  士 】";
//					case "shaman":		return "【 巫  医 】";
//					case "beggar":		return "【 叫化子 】";

                   case "heshang":     return "【 和  尚 】";
                   case "nigu":        return "【 和  尚 】";         
                   case "daoshi":      return "【 道  士 】";
                   case "jianke":      return "【 剑  客 】";
                   case "shusheng":    return "【 书  生 】";
                   case "langzi":      return "【 浪  子 】";
                   case "youxia":      return "【 游  侠 】";
                   case "shashou":     return "【 杀  手 】";
                   case "jiaohua":     return "【 叫  花 】";
                   case "xiake":       return "【 侠  客 】";
		   default:            return "【 平  民 】";
			}
		}
	}
}

string query_respect(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/respect")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "女性":
			switch(ob->query("class")) {
			case "nigu":
				if( age < 18 ) return "小师太";
				else return "师太";
				break;
			case "daoshi":
				if( age < 18 ) return "小仙姑";
				else return "仙姑";
				break;
			default:
				if( age < 18 ) return "小姑娘";
				else if( age < 50 ) return "姑娘";
				else return "婆婆";
				break;
			}
		case "男性":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 18 ) return "小师父";
				else return "大师";
				break;
			case "daoshi":
				if( age < 18 ) return "道兄";
				else return "道长";
				break;
			// case "fighter":
                        case "langzi":
                                if( age < 18 ) return "小友";
                                else if( age < 50 ) return "兄台";
                                else return "前辈";
                                break;
                        case "xiake":
			case "jianke":
				if( age < 18 ) return "小老弟";
				else if( age < 50 ) return "壮士";
				else return "老前辈";
				break;
			default:
				if( age < 20 ) return "小兄弟";
				else if( age < 50 ) return "壮士";
				else return "老爷子";
				break;
			}
	}
}

string query_rude(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/rude")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "女性":
			switch(ob->query("class")) {
			case "nigu":
				return "贼尼";
				break;
			case "daoshi":
				return "妖女";
				break;
			default:
				if( age < 30 ) return "小贱人";
				else return "死老太婆";
				break;
			}
		case "男性":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 50 ) return "死秃驴";
				else return "老秃驴";
				break;
			case "daoshi":
				return "死牛鼻子";
				break;
			default:
				if( age < 20 ) return "小王八蛋";
				if( age < 50 ) return "臭贼";
				else return "老匹夫";
				break;
			}
	}
}

string query_self(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/self")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "女性":
			switch(ob->query("class")) {
			case "nigu":
				if( age < 50 ) return "贫尼";
				else return "老尼";
				break;
			default:
				if( age < 30 ) return "小女子";
				else return "妾身";
				break;
			}
		case "男性":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 50 ) return "贫僧";
				else return "老纳";
				break;
			case "daoshi":
				return "贫道";
				break;
			default:
				if( age < 50 ) return "在下";
				else return "老头子";
				break;
			}
	}
}

string query_self_rude(object ob)
{
	int age;
	string str;

	if( stringp(str = ob->query("rank_info/self_rude")) )
		return str;

	age = ob->query("age");
	switch(ob->query("gender")) {
		case "女性":
			switch(ob->query("class")) {
			case "nigu":
				if( age < 50 ) return "贫尼";
				else return "老尼";
				break;
			default:
				if( age < 30 ) return "本姑娘";
				else return "老娘";
				break;
			}
		case "男性":
		default:
			switch(ob->query("class")) {
			case "heshang":
				if( age < 50 ) return "和尚我";
				else return "老和尚我";
				break;
			case "daoshi":
				return "本山人";
				break;
			default:
				if( age < 50 ) return "大爷我";
				else return "老子";
				break;
			}
	}
}

//write by Huang (11/02/96)
string query_guanxi(object me,object target)
{
	int me_age,target_age;
	string str;

        if( stringp(str = me->query("rank_info/guanxi")) )
                return str;

        me_age = me->query("age");
	if ( stringp(str = target->query("rank_info/guanxi")) )
		return str;
	target_age = target->query("age");

	switch(me->query("gender")) {
		case "女性":
			if (me_age > target_age) return "姊姊";
			else return "妹妹";
			break;
		case "男性":
                        if (me_age > target_age) return "哥哥";
                        else return "弟弟";
                        break;
		default:
			return "公公";
			break;
	}
}

string query_self_guanxi(object me,object target)
{
        int me_age,target_age;
        string str;

        if( stringp(str = me->query("rank_info/self_guanxi")) )
                return str;

        me_age = me->query("age");
        if ( stringp(str = target->query("rank_info/self_guanxi")) )
                return str;
        target_age = target->query("age");

        switch(target->query("gender")) {
                case "女性":
                        if (me_age <= target_age) return "姐姐";
                        else return "妹妹";
                        break;
                case "男性":
                        if (me_age <= target_age) return "哥哥";
                        else return "弟弟";
                        break;
                default:
                        return "公公";
                        break;
        }
}
