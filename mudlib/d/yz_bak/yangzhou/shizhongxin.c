// Mr.music yangzhou's ÊÐÖÐÐÄ

inherit ROOM;

void create()
{
  set ("short", "ÊÐÖÐÐÄ");
  set ("long", @LONG
	ÕâÀïÊÇ³ÇÊÐµÄÖÐÐÄ£¬Áª½Ó×Å³ÇÀï¸÷´óÖ÷Òª½ÖµÀ¡£À´×ÔÎåºþËÄº££¬
Èý½Ì¾ÅÁ÷µÄÈËÊ¿Èº¼¯ÓÚ´Ë£¬¸üÊÇ¸»ºÀÉÌ··ÃÇµÄ»Æ½ðµØ´ø¡£¡°Ñü²øÊ®Íò¹á 
Æïº×ÏÂÑïÖÝ¡±£¬Àú´ú·çÁ÷ºÀ¿ÍÖÁ´Ë£¬ÎÞ²»ÇãÄÒ¶ø¹é¡£¹ã³¡ÖÐÐÄÊÇÒ»¸ö[33mË®
³Ø[37m£¬³ØÀïºÃÏóÓÐÐ©Ð¡[33mÓã[37mÓÎÀ´ÓÎÈ¥¡£

LONG
    );

  set("objects", ([ 
                   __DIR__"npc/shusheng" : 1,
                   __DIR__"npc/xiaohaizi" : 1 ,
                   __DIR__"npc/langzhong" :1,
                 ]));

        set("item_desc", ([
                        "³Ø" : "Ò»¸öÂ¶ÌìµÄË®³Ø¡£\n" ,
                        "chi" : "Ò»¸öÂ¶ÌìµÄË®³Ø¡£\n" ,
                        "Óã" : "Ò»Ð©ºÜÐ¡µÄ²ÝÓã..\n" , 
                        "yu" : "Ò»Ð©ºÜÐ¡µÄ²ÝÓã..\n" ,  
                          ]));
        set("resource/water",1);

  set("valid_startroom", 1);
  set("outdoors", "/d/yangzhou");
  set("exits", ([  
    "west" : __DIR__"dongguan3",
    "south" : __DIR__"yingshijie1",
    "north" : __DIR__"pishijie1",
    "east"  : __DIR__"dongguan4",
]));

  setup();
}


void init()
{
    add_action("do_drink", "drink");
    add_action("do_drink", "he");
    add_action("do_eat","eat");
    add_action("do_eat","chi");
}

int do_drink(string sss)
{

object ob;
ob=this_player();
if ((sss!="chi")&&(sss!="shui")&&(sss!="water"))
  {
   return 0;
  }
if(ob->query("water")> ((int)ob->query("str")-10)*10+150 )
 {
  tell_object(ob,"ÄãºÈ×ãÁË»¹ÒªºÈ°¡£¡\n");
  return 1;
 } 
else
 {  
 say(ob->query("name")+"Å¿ÔÚË®³Ø±ß£¬Ò»¿ÚÆøºÈÁË¹»±¥. \n");
 tell_object(ob,"ÄãÅ¿ÔÚË®³Ø±ß£¬Ò»¿ÚÆøºÈÁË¹»±¥. \n");
 ob->set("water",((int)ob->query("str")-10)*10+200);

  return 1;
 }

 }

int do_eat(string sss)
{

object ob;
ob=this_player();

if ((sss!="fish")&&(sss!="yu"))
  {
   return 0;
  }

if(ob->query("food") <50 )
  {
 say(ob->query("name")+"´ÓË®³ØÀïÀÌ³öÒ»ÌõÓãÀ´£¬Ò»¿ÚÍÌÁËÏÂÈ¥. \n");
 tell_object(ob,"Äã´ÓË®³ØÀïÀÌ³öÒ»ÌõÓãÀ´£¬Ò»¿ÚÍÌÁËÏÂÈ¥. \n");
 ob->add("food",5);
  }
else 
 {
//  say (ob->query("name")+",»¹ÊÇÕÒµã±ðµÄ³Ô°É£¡\n");  
  tell_object(ob,"Äã×îºÃ»¹ÊÇÕÒµã±ðµÄ³Ô°É£¡\n");
 } 

  return 1;
}
