// Room: /u/nangong/xkd/xkshi.c

inherit ROOM;

void create()
{
        set("short", "Ê¯ÊÒ");
	set("long", @LONG
vv    ÕâÀïÊÇÏÀ¿ÍµºÉÏ×î´óµÄÒ»¼äÊ¯ÊÒ,Æ½Ê±ÏÀ¿ÍµºµÄÁ½Î»µºÖ÷¾ÍÔÚÕâÀï¾²×ø,
ºÃÏóÊÇÔÚ²ÎÎòÊ²Ã´ÎäÑ§ÄÑÌâ.(wall)
LONG
	);
  set("item_desc", ([ /* sizeof() == 1 */
              "wall":
"                   ÕÔ¿ÍçÏºúÓ§£¬Îâ¹³ËªÑ©Ã÷¡£Òø°°ÕÕ°×Âí£¬ìªí³ÈçÁ÷ÐÇ¡£
                    ÏÐ¹ýÐÅÁêÒû£¬ÍÑ½£Ï¥Ç°ºá¡£½«ÖËà¢Öìº¥£¬³ÖõüÈ°ºîÙø¡£
                    Èý±­ÍÂÈ»Åµ£¬ÎåÔÀµ¹ÎªÇá¡£ÑÛ»¨¶úÈÈºó£¬ÒâÆøËØÄÞÉú¡£
                    ¾ÈÕÔ»Ó½ð´¸£¬ºªµ¦ÏÈÕð¾ª¡£Ç§Çï¶þ×³Ê¿£¬£¨»ðØ¨£©ºÕ´óÁº³Ç¡£
                    ×ÝËÀÏÀ¹ÇÏã£¬²»²ÑÊÀÉÏÓ¢¡£Ë­ÄÜÊé¸óÏÂ£¬°×Ê×Ì«Ðþ¾­£¿
",]));
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"midao2",
]));
	set("no_clean_up", 0);

	setup();
}
void init()
{
         add_action("do_study", "yanxi");
         add_action("do_study", "study");
         add_action("do_study", "watch");
}

int do_study(string arg)
{
         mapping fam;
         object me = this_player();

         if ( !living(me) ) return 0;

         if (!(fam = me->query("family")) || fam["family_name"] != "ÏÀ¿Íµº")
                  return notify_fail("Äã²»ÊÇÏÀ¿ÍµºµÜ×Ó£¬ÈçºÎÄÜÁìÎòÏÀ¿ÍµºÎä¹¦£¿\n");

         if ((int)me->query_skill("literate", 1) > 1)
                  return notify_fail("Äã¿´ÁË°ëÌì,Ã»¿´³öÊ²Ã´ÃûÌÃ? \n");
         if ((int)me->query("kar") < 28)
                  return notify_fail("Äã¿´ÁË°ëÌì,Ã»¿´³öÊ²Ã´ÃûÌÃ? \n");
         if ((int)me->query("int",1) > 18)
                  return notify_fail("Äã¿´ÁË°ëÌì,Ã»¿´³öÊ²Ã´ÃûÌÃ? \n");

         if ( arg =="wall" )  {
                  message_vision("$N¶Ô×ÅÊ¯±ÚµÄÎÄ×Ö³öÁËÉñ¡£\n", me);

                  if ((int)me->query_skill("force", 1) > 250)
                           return notify_fail("Ê¯±ÚËùÊö¾¡ÔÚÄãÐÄ,ÄãÎÞ·¨ÔÙÎò³öÊ²Ã´ÐÂ¶«Î÷¡£\n");

                  if ((int)me->query("gin") < 20 || (int)me->query("kee") < 50 )
                           return notify_fail("Äã¾õµÃºÃÀÛ,ºÃÏëË¯¾õ¡£\n");

                  write("Äã¾²ÐÄÑÐÏ°Ê¯±ÚµÄÃØ¼®£¬¶ÔÄÚ¹¦ÐÄ·¨ÓÐÐ©ÁìÎò¡£\n");
                  me->receive_damage("gin", 10+random(5));
                  me->receive_damage("kee", 20+random(10));
me->improve_skill("xiake-shengong", 30 + random((int)me->query("int")));
                  return 1;
         }
/*
         if ( arg =="ground" ) {
                  message_vision("$N¿ªÊ¼´¹Í·ÉóÊÓµØÉÏµÄÍ¼ÐÎ¡£\n", me);

                  if ((int)me->query_skill("parry", 1) > 250)
                           return notify_fail("Äã¶Ô×ÅµØÉÏÑÐÏ°Ò»»á£¬Ö»¾õËùÊöÔçÒÑ¾¡²ØÐÄÐØ¡£\n");

                  if ((int)me->query("gin") < 30)
                           return notify_fail("ÄãÒ»ÕóÔÎÐý,ÏëÊÇÓÃÄÔ¹ý¶È,¸ÃÐÝÏ¢Ò»»áÁË¡£\n");

                  write("ÄãÄ£·Â±ÚÉÏµÄÍ¼ÐÎÉÏÌøÏÂ×Ý,ÐÞÏ°ÕÐ¼ÜÉÁ¶ã¡£\n");
                  me->receive_damage("kee", 10+random(10));
                  me->receive_damage("gin", 10+random(10));
                  me->improve_skill("parry", (int)(me->query_int()/4) +
                                                          (int)(me->query_skill("parry", 1)/5) );
                  return 1;
         }
*/
        if ( arg =="top" ) {
                  message_vision("$NÑöÊÓ±ÚÉÏÍ¼ÐÎ¡£\n", me);
/*
                  if ((int)me->query_skill("force", 1) < 30) {
                            message_vision("$N¿´×ÅÍ¼ÐÎ¿ªÊ¼ÆøÑªÉÏÓ¿, Ä¿¹âÖ±¹´¹´,¾¹È»·¢Æð´ôÀ´. \n", me);
                            write("Äã¶¨Á¦²»¹»,ÕâÑùµÄÍ¼»­»¹ÊÇÉÙ¿´ÎªÃî. \n");
                            message_vision("$NºöÈ»Ò¡»ÎÆðÀ´,ÝëµØÅç³ö¿ÚÏÊÑª. \n", me);
                            me->receive_wound("kee", 30);
                            me->unconcious();
                            return 1;
                    }
*/
                  if ((int)me->query_skill("dodge", 1) < 30 )
                            return notify_fail("ÄãµÄ»ù±¾Çá¹¦»ðºî²»¹»£¬ÎÞ·¨´ÓÕâÐ©Í¼ÐÎÖÐÁìÎò³öÊ²Ã´À´¡£\n");

                  if ((int)me->query_skill("xk-bufa", 1) > 250)
                            return notify_fail("ÄãÒÑÑ§»áÁËÏÀ¿ÍÉí·¨Éí·¨,Òª¸üÉÏÒ»²½,Ö»ÄÜ¿¿×Ô¼ºÇÚ¼ÓÁ·Ï°¡£\n");

                  if ((int)me->query_skill("xk-bufa", 1) > (int)me->query_skill("dodge", 1) )
                            return notify_fail("Äã¶ÔÏÀ¿ÍÉí·¨µÄÁìÎòÒÑ´ïµ½ÁËÄãµÄ»ù±¾Çá¹¦»ðºî¼«ÏÞ¡£\n");

                  if ((int)me->query("gin") < 20 || (int)me->query("kee") < 50 )
                           return notify_fail("Äã¾õµÃºÃÀÛ,ºÃÏëË¯¾õ¡£\n");

                  write("Äã¾²ÐÄÑÐÏ°Ê¯±ÚÉÏµÄÍ¼ÐÎ£¬ÁìÎòµ½ÏÀ¿ÍµºÇá¹¦Éí·¨µÄ¾«ËèËùÔÚ,¶ÙÊ±Ã©Èû¶Ù¿ª¡£\n");
                  me->receive_damage("kee", 20 + random(10));
                  me->receive_damage("gin", 10 + random(5));
                  me->improve_skill("xk-bufa", 20 + random((int)me->query("int")/2) + 
random((int)me->query_skill("dodge", 1) / 5));
//                write(RED"¹§Ï²¸óÏÂÑ§»áÏÀ¿Í²½·¨. \n"NOR);
                  return 1;
         }

         return 0;
}

