// Room: /u/cyj/room/ziyunlou.c
inherit ROOM;

void create()
{
  set ("short", "紫云楼");
  set ("long", @LONG
眼前就是紫云楼了。主人尚秀芳博才多艺，举凡天文地理，诗词歌赋
样样精通。你若有什么疑问可以向她请教，不过。。。。。。
LONG);

set("outdoors","/d/jingling");
  set("light_up", 1);
  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"huayuan.c",
]));
  set("no_fight", 1);
  setup();
}
