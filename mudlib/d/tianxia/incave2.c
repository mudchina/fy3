// Room: /d/new/tianxia/incave2
inherit ROOM;

void create()
{
  set ("short", "麒麟洞内");
  set ("long", @LONG
眼前黑呼呼的,看不见些什么.耳边传来流水潺潺声,似乎旁边有条
河流.在东北方向有一线光亮.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northeast" : __DIR__"incave1",
]));
  setup();
}
