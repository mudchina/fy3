// Mr.music  yangzhou's 北门

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "北门");
        set("long", @LONG
	这儿就是扬州城的北门，因近来扬州城郊常有盗匪出没，不太安全，
所以一到晚上，城门就会关闭。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/wulai" : 2,
        ]));

        set("exits", ([
              "south" : __DIR__"pishijie3",
		"north":"/d/taishan/yidao",
                     ]));
        setup();
        replace_program(ROOM);
}

