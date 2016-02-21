//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "Îäºîìô");
        set("long", @LONG

          Ø©ÏàìôÌÃºÎ´¦Ñ°£¿½õ¹Ù³ÇÍâ°ØÉ­É­¡£
          Ó³½×±Ì²Ý×Ô´ºÉ«£¬¸ôÒ¶»ÆÅô¿ÕºÃÒô¡£
          Èý¹ËÆµ·³ÌìÏÂ¼Æ£¬Á½³¯¿ª¼ÃÀÏ³¼ÐÄ¡£
          ³öÊ¦Î´½ÝÉíÏÈËÀ£¬³¤Ê¹Ó¢ÐÛÀáÂú½ó¡
£
   ÕâÀï¾ÍÊÇ±»´¨ÈË¾´ÑöµÄÎäºîìô.ÕâÀï°²Ôá×ÅÈý¹úÊ±´úµÄ
Ò»´úÏÍ³¼Öî¸ðÁÁ,³£ÓÐ³É¶¼±¾µØÈËºÍÓÎ¿ÍÇ°À´²Î°Ý¡£ËÄÖÜ²Î
Ìì´óÊ÷»·ÈÆ×Å¾Þ´óÁêÄ¹,´óÊ÷ÉÏ²»Ê±´«À´¼¸Éù»­Ã¼ÄñÇå´àµÄ
½ÐÉù¡£ÄãÀ´Äî×Å¡°³öÊ¦Î´½ÝÉíÏÈËÀ¡±,ÐÄÖÐ²»ÓÉµÃÒ»Õó÷öÈ»¡£
Î÷ÃæÓÐ×ùÁêÄ¹¡£
LONG
        );

        set("exits", ([
                "west" : __DIR__"lingmu",
                "east" : __DIR__"beijie1",
        ]));

        set("outdoors", "chengdu");
        setup();
        replace_program(ROOM);
}

 
