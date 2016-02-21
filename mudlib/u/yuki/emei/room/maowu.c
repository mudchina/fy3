// Room: /u/yuki/emei/maocaowu.c

inherit ROOM;

void create()
{
        set("short", "茅草屋");
        set("long", @LONG
屋子里面倒是收拾的很干净，摆设很简单，摆着一张
木桌，两把木椅，和墙角的一张小竹床。屋中唯一的装饰就
是窗边的一个小花篮，可是篮子中的茶花却是迎着微风摇摆
着，显然是刚刚摘下来的。
LONG
        );
        set("item_desc", ([ /* sizeof() == 2 */
        "hualan" : "一个用竹片编成的精致的小花篮，竹片已经被摩挲得十分光滑。篮中插着几朵茶花。",
]));
        set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"banshanyao",
]));
        set("no_clean_up", 0);
        set("objects", ([ /* sizeof() == 1 */
  "/u/yuki/emei/room/npc/chahuanv" : 1,
]));

        setup();
//      replace_program(ROOM);
}

void init()
{
        add_action("do_get","get");
}

int do_get(string arg)
{
        object me,ob;
        me=this_player();
        ob=this_object();
        if(arg!="chahua") return 0; 
        message_vision("$N轻轻的从竹篮中拿出了一朵茶花。\n", me);
        ob = new("/u/yuki/emei/room/obj/chahua");
        ob->move(me);
        return 1;
}



