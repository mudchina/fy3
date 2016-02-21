//music  yangzhou's Ëåì¾µÛÁê

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "Ëåì¾µÛÁê");
        set("long", @LONG
	ÕâÀï¾ÍÊÇËåì¾µÛµÄÁêÄ¹£¬Ò»´ú»è¾ı³¤ÃßÓÚ´Ë£¬Ä¹Ñ¨ÂÒÊ¯³É¶Ñ£¬ÔÓ²İ´Ô
Éú£¬Ö»ÓĞÒ»¿éÂúÉíÉËºÛµÄ[33mÄ¹±®[37m¾­ÄêÀÛÔÂµÄÄ¬Ä¬ÊØÔÚ·çÑ©Ö®ÖĞ¡£ÕâÊ±£¬Ò»Õóº®·ç
Ó­Ãæ´µÀ´£¬Äã¿´×ÅËÄÖÜÎŞ±ßµÄ¿õÒ°£¬²»½û´òÁË¸öº®Õ½£¬ÏóÊÇÔø¾­¶ªÊ§ÁËÊ²Ã´¡£
ÕâÑùµÄµØ·½»¹ÊÇ²»ÒªÔÙÀ´ÁË£¬Äã°µ×ÔĞÄÏë¡£

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("no_fight", "1");
        set("no_steal", "1");
        set("no_sleep_room", "1");

        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "east" : __DIR__"huangye1",
                    ]));
 //       create_door("northwest", "ÖñÃÅ", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

