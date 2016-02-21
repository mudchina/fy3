// Room: /d/huanggon/zhonghedian
inherit ROOM;

void create()
{
  set ("short", "中和殿");
  set ("long", @LONG
中和殿是一较小的方殿,皇帝早朝太和殿,先在此接受执事官员的朝
拜,也是皇帝出席重大典礼休息的地方,每年新年一开春,种子和农具就
送到殿中,接受检视.东面是军机处,西面是太医院.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"taiyiyuan",
  "east" : __DIR__"junjichu",
  "south" : __DIR__"taihedian",
  "north" : __DIR__"baohedian",
]));
  setup();
  replace_program(ROOM);
}
