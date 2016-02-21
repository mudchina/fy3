// music yangzhou's ÈË²Î

#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("ÈË²Î", ({ "renshen","shen" }) );
        set("long","Ò»ÖÖ¹óÖØµÄ×Ì²¹Ò©²Ä¡£\n");
        set("unit", "¶Î");
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
        ob->add("max_kee",1);
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("eff_kee",(int)ob->query("max_kee"));

        ob->set("force", (int)ob->query("max_force"));

        write("[1;33mÄã³ÔÏÂÁËÒ»¶ÎÈË²Î¡£\n[0;37m");

        message("vision", HIY + ob->name() + 
"³ÔÏÂ³ÔÏÂÁËÒ»¶ÎÈË²Î£¬³¤ÎüÁËÒ»¿ÚÆø£¬¸Ğ¾õºÃ¶àÁË¡£\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
