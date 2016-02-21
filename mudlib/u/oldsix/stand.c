inherit NPC;
inherit F_SAVE;

string query_save_file() { return "/data/npc/"+query("data"); }
void create(string data)
{
	set("data",data);
	if(! restore())	{
		set_name("°ë³ÉÆ·",({"machine"}));
	}
	setup();
}


