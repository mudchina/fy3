// Room: /d/huanggon/kangxiaowu
inherit ROOM;

void create()
{
  set ("short", "佛堂");
  set ("long", @LONG
满州人信佛,富贵人家都建有佛堂,这座小屋中供着一尊如来佛像,
神座前点着油灯,供桌边是个大锦垫,一边还有个木鱼,一本翻开了的经
书摊在垫子边,地上是一块块的方砖.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xiaogardon1",
]));
  setup();
  replace_program(ROOM);
}
