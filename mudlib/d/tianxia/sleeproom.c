// Room: /d/tianxia/sleeproom
inherit ROOM;

void create ()
{
  set ("short", "寝室");
  set ("long", @LONG
两排长长的石榻占据了房间中绝大部分的空间，地上胡乱扔着些衣
物，看来也没人整理。发出一种深沉的臭味。顶端一张小方桌上一小
段蜡烛是这个房间唯一的光源。
LONG);

  set("sleep_room", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"1guan8",
]));

  setup();
}
