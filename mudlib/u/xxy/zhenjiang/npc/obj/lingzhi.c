//music yangzhou's ÁéÖ¥

#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("ÁéÖ¥", ({ "lingzhi","ling","zhi" }) );
        set("long", "Ò»ÖÖ¹óÖØÒ©²Ä¡£\n");
        set("unit", "Ö§");
        set("weight", 50);
        set("value", 1000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
        if( !id(arg) ) return notify_fail("ÄãÒª³ÔÊ²÷á£¿\n");

        ob=this_player();
        ob->add("max_gin",1);
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
 
        ob->set("atman", (int)ob->query("max_atman"));
    
        write("[1;33mÄã³ÔÁËÒ»Ö§ÁéÖ¥£¬¸Ğ¾õ¾«Á¦ºÃ¶àÁË¡£\n[0;37m");

        message("vision", HIY + ob->name() + 
"Äã³ÔÁËÒ»Ö§ÁéÖ¥£¬¿´ÉÏÈ¥¸Ğ¾õ¾«Á¦ºÃ¶àÁË¡£\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
