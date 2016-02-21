// Room: /d/huanggon/jiaotaidian
inherit ROOM;

void create()
{
  set ("short", "交泰殿");
  set ("long", @LONG
交泰殿位于乾清宫和坤宁宫之间,是皇室存放玉玺的地方,共有二十
五方印玺保存在金盒之中,上面覆以黄缎.后面的匾额之上写着'无为'二
字.底下是块写满子的屏风.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"kunningon",
  "south" : __DIR__"qianqingon",
]));
  setup();
}
int valid_leave(object me,string dir)
{
 if (dir=="south"&&me->query("xxy/lvl")<4)
return notify_fail("你刚想踱向乾清宫，就被守殿侍卫挡住了!\n");
return ::valid_leave(me,dir);
}
