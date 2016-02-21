#include <ansi.h>
inherit NPC;
int occasionally_event(object me);
string *namesa = ({
  GRN"你在百无聊赖之际，又回忆起了童年的美好时光。"NOR,
  HIB"一只蜻蜓在低低地飞着。"NOR,
  HIM"一只色彩斑斓的蝴蝶围着你转来转去，转眼又飞走了。"NOR,
  HIY"你总觉得这个地方透着点古怪。"NOR,
  HIG"一阵微风吹来，近旁的树叶发出沙沙的响声。"NOR,
  HIC"有个人和你擦身而过，你竟然觉得跟他似曾相识，不禁回头顾盼。"NOR,
  MAG"远处传来一阵悠扬的乐曲，你忽然忆起往事，不由得心神如醉。。。"NOR,
  CYN"你忽然听见一声呢喃燕语，一只可爱的小燕子从你身边飞了过去。。。"NOR,
WHT"天上缓缓飘过一只风筝，你依稀见到风筝上绣着一支剑
。\n\n风筝随风而去，渐渐越飘越远了。。。"NOR,
 });
string *namesb = ({
  WHT"你一下子感到身心疲惫，懒懒地提不起精神。"NOR,
  HIM"一阵奇异的香味飘了过来，你不禁精神一振。"NOR,
  YEL"忽然一道光芒在你面前闪过，你只觉眼前一花，也不知看见了什么。"NOR,
  HIC"你隐约觉得屋顶上似有响动。"NOR,
  HIG"你忽然听见窗外有人在低声交谈着什么。"NOR,
  HIB"你总觉得这里隐藏着什么玄机。"NOR,
  CYN"你只感到周围寂静无声，仿佛一根针掉在地上都听得见。"NOR,
  HIR"你忽然感到空气中弥漫着一股杀气，令人不寒而栗。"NOR,
  HIY"不远处传来一阵惊呼声，你心里不由得一颤。"NOR,
 });

void create()
{
        set_name("花无缺", ({ "hua wuque" }) );
        set("title", "风之子");
        set("nickname", WHT"落雨长歌"NOR);
        set("gender", "男性" );
        set("age", 26);
        set("str", 30);
        set("int", 30);
        set("per", 30);
        set("long",
                "他是铁血江湖的巫师。\n");
        set("attitude", "peaceful");
        set("max_kee", 1000);
        set("max_gin", 1000);
        set("max_sen", 1000);
        set("kee", 1000);
        set("gin", 1000);
        set("sen", 1000);
        set("no_shown", 1);

        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 90);
        set("mana", 2000);
        set("max_mana", 2000);
        set("mana_factor", 20);

        set("combat_exp", 9000000);
        set("score", 90000);
        set_skill("unarmed", 300);
        set_skill("parry", 300);
        set_skill("dodge", 300);

        set("chat_chance", 1);
        set("chat_msg", ({
                (: occasionally_event(this_object()) :),
        }) );
        setup();
}

int occasionally_event(object me)
{
 object *usr ;
 int i;
        string msg;
        string msga = namesa[random(sizeof(namesa))];
        string msgb = namesb[random(sizeof(namesb))];
         usr = users();
        for(i=0; i<sizeof(usr); i++) 
                {
                if( !environment(usr[i]) ) continue;
                if( !environment(usr[i])->query("outdoors") ) 
//      usr[i]->set_temp("event_msg_ok",1);
        msg = msgb;
        else
        msg = msga;
//               tell_object(usr[i] ,"\n"+ msgb +"\n\n");
                }
      message("system", "\n"+ msg +"\n\n", users());
        return 1;
}

