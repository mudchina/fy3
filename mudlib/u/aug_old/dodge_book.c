// dodge book
// 97.7.27 by Aug

inherit ITEM;

void create()
{
	set_name("轻功图解", ({ "dodge book","book" }) );
	set_weight(600);
	set("unit", "本");	
	set("long","这是本帮助你提高轻功的书。\n");
 	set("value", 5000);
	set("skill", ([
		"name": "dodge",        
		"exp_required": 0,
		"sen_cost": 20,
 		"difficulty": 20,
		"max_skill": 30
	]) );
}
 
