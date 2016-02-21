// thd:hill_foot.c

inherit ROOM;

void create()
{
      set("short", "弹指峰底");
	set("long", @LONG
这是弹指峰的山脚。虽然弹指峰和大陆的名山大川比起来并不算太高
，但在这海岛上看来确出奇的高大、巍峨。在大海上的晴朗日子里，在三
十里外就能可见这座山峰。这座山峰正体现了黄药师雄霸一方的王者之气
，和卓然不群的潇洒风度。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 4 */
          "northup" : __DIR__"hill1",     
          "south" : __DIR__"nroad",     
          "southwest" : __DIR__"nbeach",          
          "southeast" : __DIR__"nebeach2",               
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

