// music yangzhou's ²¹³¥×¨ÓÃ
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("×¨¹©ÀÏÍæ¼Ò·şÓÃ(fuyong)µÄÊ®È«´ó²¹Íè", ({ "dabuwan","wan"}) );
        set("long", "Ò»ÖÖÃû¹ó²¹Ò©¡£¿ÉÒÔÂôÇ®ºÍËÍÈË.µ«³Ô¹ı²»ÄÜÔÙ³Ô¡£\n");
        set("unit", "¿Å");
        set("weight", 100);
        set("value", 1000);
}

void init()
{
        add_action("do_eat", "fuyong");
}

int do_eat(string arg)
{

        int i; int j=0; 
        object *inv;
        object ob;
        if( !id(arg) ) return notify_fail("ÄãÒª·şÓÃÊ²÷á£¿\n");

        ob=this_player();

         inv=all_inventory(ob);
             for(i=0;i<sizeof(inv);i++)
            {
             if(inv[i]->query("id")== "dabuwan")
              {
                 j=j+1;
              }
            }

 if( ob->query("buchang") )
    {
     write("ÕâÒ©³Ô¹ıÔÙ³Ô¾ÍÃ»ÓÃÁË¡£\n");

// Òª°Ñ×Ô¼ºÁôÏÂ£¬Òª²»ÃüÁî¾ÍÃ»ÔØÌåÁË   musix
//   ´íÎó      for(i=0;i<sizeof(inv);i++)

         for(i=(sizeof(inv)-1);i>=0;i--)
            {
             if(inv[i]->query("id")== "dabuwan")
              {
                destruct(inv[i]);
              }
            }

     return 1;
    } 
  else
    {
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
        ob->add("max_sen",10*j);
        ob->set("sen",(int)ob->query("max_sen"));
        ob->add("max_kee",10*j);
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->add("max_gin",10*j);
        ob->set("eff_gin",(int)ob->query("max_gin"));
        ob->set("eff_sen",(int)ob->query("max_sen"));

        ob->set("atman", (int)ob->query("max_atman"));
        ob->add("max_force",10*j);
        ob->set("force", (int)ob->query("max_force"));
        ob->set("mana", (int)ob->query("max_mana"));

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
     
        ob->add("int",2);

        write("[1;33mÄã³ÔÏÂÒ»Åú´ó²¹Íè£¬×´Ì¬¶ÙÊ±ºÃ¶àÁË£¡\n[0;37m");

        message("vision", HIY + ob->name() + 
"³ÔÏÂÁËĞ©É¶£¬¸Ğ¾õºÃ¼«ÁË£¡\n"+NOR,
                environment(ob), ob);
        ob->set("buchang",1);
 // ´íÎó        for(i=0;i<sizeof(inv);i++)
         for(i=(sizeof(inv)-1);i>=0;i--)
            {
             if(inv[i]->query("id")== "dabuwan")
              {
                destruct(inv[i]);
              }
            }

        return 1;
      }

}
