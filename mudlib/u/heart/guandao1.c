// Room: /u/uuui/guandao1.c

inherit ROOM;

void create()
{
        set("short", "官道");
        set("long", @LONG
出了凝王寝殿有一种非常遐逸的感觉，官道也是
用大理石铺地。两边种有一些松柏。使得这里冬天也
会另一翻美丽的景象。北面有一座汉白玉的小桥。再
往前就是花园了。
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"shiqiao",
  "south" : __DIR__"workroom",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}
