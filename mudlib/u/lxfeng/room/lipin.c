//Room: lipin.c

inherit ROOM;

void create ()
{
        set ("short", "礼品屋");
        set ("long", @LONG
领千禧年礼物的房间。
LONG);
        set("exits", ([ /* sizeof() == 1 */
        "out" : "/d/zhongzhou/yinghaoup",
        ]));
        set("objects", ([ /* sizeof() == 1 */
        "/u/lxfeng/npc/shizhe" : 1,
       ]));
        set("no_fight", 1);
        set("no_magic", 1);


        setup();
}
