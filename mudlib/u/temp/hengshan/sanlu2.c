//make by temp
//ROOM: sanlu2.c


inherit ROOM;

void create()
{
        set("short", "山间小路");
        set("long",@LONG
这是山间寻常的小路，两边的野花片地都是，不过这条小路还是
非常的陡峭。向前后观看小路的尽头是一片的森林，你似乎听见林中
传来的野兽的嚎叫，可要小心了。
LONG
        );
        set("exits", ([
                "northup" : __DIR__"miling2",
                "southdown" : __DIR__"miling1",
                "eastup" : __DIR__"miling4",
                "westdown" : __DIR__"pmgu"
        ]));
        setup();
        replace_program(ROOM);
}
