// Room: /d/xxy/dadian 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "大殿");
  set ("long", @LONG
这是古寺的大殿,里面的佛像早已给好事的人搬走,撑住大殿的四根柱
子已经倒了一根,另有两根也是摇摇欲坠.殿堂的一角倒塌下来,露出外面
的天空,有个门户通向北面.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"fdian",
  "southdown" : __DIR__"feishi",
]));
  setup();
}
