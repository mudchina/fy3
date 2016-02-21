#include <ansi.h>;
  
inherit ROOM;
  
void create()
{
        set("short", "飞雨阁");
        set("long", @LONG
这里是“飞雨阁”。映入眼帘的是唐代时候江南通
用的落地花格窗。起雕工精细。漆饰讲究，华贵中蕴涵
朴直。细巧中透着洒脱。厅内正中悬着镶有“飞雨阁”
三个字的匾额。匾额下是一幅运笔简洁的，人物形象栩
栩如生的“五儒图”，其两侧是幅对联。字迹遒劲飘逸
颇显功底。东面则是侧厅。
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"ceting",
  "south" : __DIR__"guandao",
]));

        set("no_sleep_room", 1);
        set("no_fight", 1);
        set("objects", ([ /* sizeof() == 2 */
  __DIR__"xiao" : 1,
]));
        set("no_clean_up", 0);
  
        setup();
}
  
void init()
{
        add_action("do_idle","idle");
}
int do_idle()
{
this_player()->set("title",HIB"凝王府夫人"NOR);
return 1;
}

