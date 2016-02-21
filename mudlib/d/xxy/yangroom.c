// Room: /d/xxy/yangroom 
inherit ROOM; 
 
void create ()
{
  set ("short", "扬级寝室");
  set ("long", @LONG
这是扬级武士所住的房间,里面摆了四张木板床,配上粗棉被,倒也干净. 
正中有一张板木桌子,上面有个粗磁大茶壶,以备口渴时饮用. 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"zoulang1",
]));
  set("sleep_room", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/d/obj/clone/food/jiudai.c" : 1,
  "/d/obj/clone/food/baozi.c" : 5,
]));

  setup();
}
