// Room: /u/yuki/room/shangfang.c

inherit ROOM;

void create()
{
        set("short", "亭子顶");
        set("long", @LONG
这里虽然是亭子顶端，但是却是非常干净，四周有柱梁的样
板上雕有象征福禄寿喜的蝙蝠，仙鹿，寿桃，牡丹图案。在这里
你发现了一个指环。
LONG
        );
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"meihuating",
]));
        set("objects", ([
                 __DIR__"obj/huan": 1,
        ]));

        setup();
        replace_program(ROOM);
}
