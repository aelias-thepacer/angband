/*
 * File: monster/list-mon-spells.h
 * Purpose: List of monster spell flags 
 *
 * Changing flag order will break savefiles. There is a hard-coded limit of
 * 256 flags, due to 32 bytes of storage for lore flags in the savefile. Flags
 * below start from 1 on line 26, so a flag's sequence number is its line
 * number minus 25. Up to and including BOULDER are "innate" spells.
 *
 * Fields:
 * name - spell name
 * type - spell type
 * desc - textual description
 * cap - damage cap
 * div - damage divisor (monster hp / this)
 * gf - projection type for project() functions
 * msgt - flag for message colouring
 * save - does this spell allow a saving throw?
 * hit - to-hit chance (100 = always, 0 = never)
 * verb - description of attack
 * base_dam - raw damage (random_value struct)
 * rlev_dam - monster-level-dependent damage (random_value)
 * blind_verb - description of unseen attacks
 */
/* 	name		type		desc			  cap	div	gf			msgt			save	hit		verb					base_dam		rlev_dam		blind_verb */
RSF(NONE,		0,			NULL,			    0,	0, 	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(SHRIEK,		RST_ANNOY,	"shriek",		    0,	0, 	0,			0,				FALSE,	100,	"makes a high-pitched",	RV(0,0,0,0),	RV(0,0,0,0),	"shrieks")
RSF(XXX1,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(XXX2,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(XXX3,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(ARROW_1,	RST_BOLT,	"arrow",			0,	0,	GF_ARROW,	0,				FALSE,	40,		"fires an",				RV(0,1,6,0),	RV(0,0,0,0),	"makes a strange noise")
RSF(ARROW_2,	RST_BOLT,	"arrow",			0,	0,	GF_ARROW,	0,				FALSE,	40,		"fires an",				RV(0,3,6,0),	RV(0,0,0,0),	"makes a strange noise")
RSF(ARROW_3,	RST_BOLT,	"missile",			0,	0,	GF_ARROW,	0,				FALSE,	50,		"fires a",				RV(0,5,6,0),	RV(0,0,0,0),	"makes a strange noise")
RSF(ARROW_4,	RST_BOLT,	"missile",			0,	0,	GF_ARROW,	0,				FALSE,	50,		"fires a",				RV(0,7,6,0),	RV(0,0,0,0),	"makes a strange noise")
RSF(BR_ACID,	RST_BREATH,	"acid",			 1600,	3, 	GF_ACID,	MSG_BR_ACID,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"hisses")
RSF(BR_ELEC,	RST_BREATH,	"lightning",	 1600,	3,	GF_ELEC,	MSG_BR_ELEC,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"crackles")
RSF(BR_FIRE,	RST_BREATH,	"fire",			 1600,	3,	GF_FIRE,	MSG_BR_FIRE,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"roars")
RSF(BR_COLD,	RST_BREATH,	"frost",		 1600,	3,	GF_COLD,	MSG_BR_FROST,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"wooshes")
RSF(BR_POIS,	RST_BREATH,	"poison",		  800,	3,	GF_POIS,	MSG_BR_GAS,		FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"retches")
RSF(BR_NETH,	RST_BREATH,	"nether",		  550,	6,	GF_NETHER,	MSG_BR_NETHER,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"groans")
RSF(BR_LIGHT,	RST_BREATH,	"light",		  400,	6,	GF_LIGHT,	MSG_BR_LIGHT,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_DARK,	RST_BREATH,	"darkness",		  400,	6,	GF_DARK,	MSG_BR_DARK,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_CONF,	RST_BREATH,	"confusion",		0,	0,	GF_CONFU,	MSG_BR_CONF,	FALSE,	0,		"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(BR_SOUN,	RST_BREATH,	"sound",		  500,	6, 	GF_SOUND,	MSG_BR_SOUND,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_CHAO,	RST_BREATH,	"chaos", 		  500,	6,	GF_CHAOS,	MSG_BR_CHAOS,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_DISE,	RST_BREATH,	"disenchantment", 500,	6,	GF_DISEN,	MSG_BR_DISEN,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_NEXU,	RST_BREATH,	"nexus",	 	  400,	6,	GF_NEXUS,	MSG_BR_NEXUS,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_TIME,	RST_BREATH,	"time",		 	  150,	3,	GF_TIME,	MSG_BR_TIME,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_INER,	RST_BREATH,	"inertia",	 	  200,	6,	GF_INERTIA,	MSG_BR_INERTIA,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_GRAV,	RST_BREATH,	"gravity",	 	  200,	3,	GF_GRAVITY,	MSG_BR_GRAVITY,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_SHAR,	RST_BREATH,	"shards",	 	  500,	6,	GF_SHARD,	MSG_BR_SHARDS,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_PLAS,	RST_BREATH,	"hellfire",	 	  150,	6,	GF_PLASMA,	MSG_BR_PLASMA,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_WALL,	RST_BREATH,	"force",	 	  200,	6,	GF_FORCE,	MSG_BR_FORCE,	FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(BR_MANA,	RST_BREATH,	"raw magic",	 1600,	3,	GF_MANA,	0,				FALSE,	100,	"breathes",				RV(0,0,0,0),	RV(0,0,0,0),	"breathes")
RSF(XXX4,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(XXX5,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(XXX6,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(BOULDER,	RST_BOLT,	"boulder",	   		0,	0,	GF_ARROW,	0,				FALSE,	60,		"hurls a",				RV(0,1,12,0),	RV(0,14,12,1),	"grunts with exertion")
RSF(BA_ACID,	RST_BALL,	"acid",				0,	0,	GF_ACID,	0,				FALSE,	100,	"casts a ball of",		RV(15,0,0,0),	RV(0,1,300,0),	"mumbles")
RSF(BA_ELEC,	RST_BALL,	"lightning",		0,	0,	GF_ELEC,	0,				FALSE,	100,	"casts a ball of",		RV(8,0,0,0),	RV(0,1,150,0),	"mumbles")
RSF(BA_FIRE,	RST_BALL,	"fire",				0,	0,	GF_FIRE,	0,				FALSE,	100,	"casts a ball of",		RV(10,0,0,0),	RV(0,1,350,0),	"mumbles")
RSF(BA_COLD,	RST_BALL,	"frost",			0,	0,	GF_COLD,	0,				FALSE,	100,	"casts a ball of",		RV(10,0,0,0),	RV(0,1,150,0),	"mumbles")
RSF(BA_POIS,	RST_BALL,	"poison",			0,	0,	GF_POIS,	0,				FALSE,	100,	"creates a cloud of",	RV(0,12,2,0),	RV(0,0,0,0),	"mumbles")
RSF(BA_NETH,	RST_BALL,	"nether",			0,	0,	GF_NETHER,	0,				FALSE,	100,	"casts a ball of",		RV(50,10,10,0),	RV(100,0,0,0),	"mumbles")
RSF(BA_WATE,	RST_BALL,	"water",	   		0,	0,	GF_WATER,	0,				FALSE,	100,	"creates a whirlpool of",RV(50,0,0,0),	RV(0,1,250,0),	"gurgles")
RSF(BA_MANA,	RST_BALL,	"raw magic",		0,	0,	GF_MANA,	0,				FALSE,	100,	"invokes a storm of", 	RV(0,10,10,0),	RV(500,0,0,0),	"screams loudly")
RSF(BA_DARK,	RST_BALL,	"darkness",			0,	0,	GF_DARK,	0,				FALSE,	100,	"invokes a storm of",	RV(0,10,10,0),	RV(500,0,0,0),	"mumbles loudly")
RSF(DRAIN_MANA,	RST_ANNOY,	"mana away",		0,	0,	0,			0,				FALSE,	100,	"drains your",			RV(0,0,0,0),	RV(0,0,0,0),	"moans")
RSF(MIND_BLAST,	RST_ATTACK | RST_ANNOY,"mind blasting",0,0,0,		0,				TRUE,	100,	"gazes at you with",	RV(0,8,8,0),	RV(0,0,0,0),	"focuses on your mind")
RSF(BRAIN_SMASH,RST_ATTACK | RST_ANNOY,"psionic energy",0,0,0,		0,				TRUE,	100,	"smashes you with",		RV(0,12,15,0),	RV(0,0,0,0),	"focuses on your mind")
RSF(CAUSE_1,	RST_ATTACK,	"curses",	   		0,	0,	0,			0,				TRUE,	100,	"points at you and",	RV(0,3,8,0),	RV(0,0,0,0),	"mumbles")
RSF(CAUSE_2,	RST_ATTACK,	"curses horribly",	0,	0,	0,			0,				TRUE,	100,	"points at you and",	RV(0,8,8,0),	RV(0,0,0,0),	"mumbles")
RSF(CAUSE_3,	RST_ATTACK,	"incants terribly",	0,	0,	0,			0,				TRUE,	100,	"points at you and",	RV(0,10,15,0),	RV(0,0,0,0),	"mumbles loudly")
RSF(CAUSE_4,	RST_ATTACK,	"screams the word 'DIE!'",0,0,0,		0,				TRUE,	100,	"points at you and",	RV(0,15,15,0),	RV(0,0,0,0),	"screams the word 'DIE!'")
RSF(BO_ACID,	RST_BOLT,	"acid",				0,	0,	GF_ACID,	0,				FALSE,	100,	"casts a bolt of",		RV(0,7,8,0),	RV(33,0,0,0),	"mumbles")
RSF(BO_ELEC,	RST_BOLT,	"lightning",		0,	0,	GF_ELEC,	0,				FALSE,	100,	"casts a bolt of",		RV(0,4,8,0),	RV(33,0,0,0),	"mumbles")
RSF(BO_FIRE,	RST_BOLT,	"fire",				0,	0,	GF_FIRE,	0,				FALSE,	100,	"casts a bolt of",		RV(0,9,8,0),	RV(33,0,0,0),	"mumbles")
RSF(BO_COLD,	RST_BOLT,	"frost",			0,	0,	GF_COLD,	0,				FALSE,	100,	"casts a bolt of",		RV(0,6,8,0),	RV(33,0,0,0),	"mumbles")
RSF(BO_POIS,	RST_BOLT,	"poison",			0,	0,	GF_POIS,	0,				FALSE,	100,	"spews a stream of",	RV(0,9,8,0),	RV(33,0,0,0),	"retches")
RSF(BO_NETH,	RST_BOLT,	"nether",			0,	0,	GF_NETHER,	0,				FALSE,	100,	"casts a bolt of",		RV(30,5,5,0),	RV(150,0,0,0),	"mumbles")
RSF(BO_WATE,	RST_BOLT,	"water",			0,	0,	GF_WATER,	0,				FALSE,	100,	"fires a jet of",		RV(0,10,10,0),	RV(100,0,0,0),	"gurgles")
RSF(BO_MANA,	RST_BOLT,	"raw magic",		0,	0,	GF_MANA,	0,				FALSE,	100,	"casts a bolt of",		RV(50,0,0,0),	RV(0,1,350,0),	"screams")
RSF(BO_PLAS,	RST_BOLT,	"hellfire",			0,	0,	GF_PLASMA,	0,				FALSE,	100,	"casts a bolt of",		RV(10,8,7,0),	RV(100,0,0,0),	"screams")
RSF(BO_ICEE,	RST_BOLT,	"ice",		   		0,	0,	GF_ICE,		0,				FALSE,	100,	"shoots a spear of",	RV(0,6,6,0),	RV(100,0,0,0),	"mumbles")
RSF(MISSILE,	RST_BOLT,	"magic missile",	0,	0,	GF_MISSILE,	0,				FALSE,	100,	"fires a",				RV(0,2,6,0),	RV(33,0,0,0),	"mumbles")
RSF(SCARE,      RST_ANNOY,	"scary horrors",	0,	0,	0,			0,				TRUE,	100,	"conjures up",			RV(0,0,0,0),	RV(0,0,0,0),	"makes scary noises")
RSF(BLIND,      RST_ANNOY,	"blinding flash",	0,	0,	0,			0,				TRUE,	100,	"sets off a",			RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(CONF,       RST_ANNOY,	"weird things",		0,	0,	0,			0,				TRUE,	100,	"conjures up",			RV(0,0,0,0),	RV(0,0,0,0),	"messes with your mind")
RSF(SLOW,       RST_ANNOY | RST_HASTE,"move slowly",0,0,0,			0,				TRUE,	100,	"tries to make you",	RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(HOLD,       RST_ANNOY | RST_HASTE,"stop moving",0,0,0,			0,				TRUE,	100,	"tries to make you",	RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(HASTE,      RST_HASTE,	"moving faster",	0,	0,	0,			0,				FALSE,	100,	"starts",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(XXX7,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(HEAL,       RST_HEAL,	"closing wounds",	0,	0,	0,			0,				FALSE,	100,	"magically starts",		RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(XXX8,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(BLINK,      RST_TACTIC | RST_ESCAPE,"phase door",0,0,0,			0,				FALSE,	100,	"casts a",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(TPORT,      RST_ESCAPE,	"teleport away",	0,	0,	0,			0,				FALSE,	100,	"tries to",				RV(0,0,0,0),	RV(0,0,0,0),	"makes a soft 'pop'")
RSF(XXX9,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(XXX10,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(TELE_TO,    RST_ANNOY,	"come hither",		0,	0,	0,			0,				FALSE,	100,	"commands you to",		RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(TELE_AWAY,  RST_ESCAPE,	"go away",			0,	0,	0,			0,				FALSE,	100,	"commands you to",		RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(TELE_LEVEL, RST_ESCAPE,	"go far away",		0,	0,	0,			0,				TRUE,	100,	"commands you to",		RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(XXX11,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(DARKNESS,   RST_ANNOY,	"darkness",			0,	0,	GF_DARK_WEAK,0,				FALSE,	100,	"surrounds you in",		RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(TRAPS,      RST_ANNOY,	"traps",			0,	0,	0,			0,				FALSE,	100,	"cackles evilly about",	RV(0,0,0,0),	RV(0,0,0,0),	"cackles evilly")
RSF(FORGET,     RST_ANNOY,	"forget things",	0,	0,	0,			0,				TRUE,	100,	"tries to make you",	RV(0,0,0,0),	RV(0,0,0,0),	"messes with your mind")
RSF(XXX12,		0,			NULL,				0,	0,	0,			0,				FALSE,	0,		NULL,					RV(0,0,0,0),	RV(0,0,0,0),	NULL)
RSF(S_KIN,      RST_SUMMON,	"its kin",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_HI_DEMON, RST_SUMMON,	"major demons",		0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_MONSTER,  RST_SUMMON,	"a companion",		0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_MONSTERS, RST_SUMMON,	"some friends",		0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_ANIMAL,   RST_SUMMON,	"animals",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_SPIDER,   RST_SUMMON,	"spiders",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_HOUND,    RST_SUMMON,	"hounds",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_HYDRA,    RST_SUMMON,	"hydrae",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_ANGEL,    RST_SUMMON,	"angels",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_DEMON,    RST_SUMMON,	"demons",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_UNDEAD,   RST_SUMMON,	"the undead",		0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_DRAGON,   RST_SUMMON,	"dragons",			0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_HI_UNDEAD,RST_SUMMON,	"fiends of darkness",0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_HI_DRAGON,RST_SUMMON,	"ancient dragons",	0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_WRAITH,   RST_SUMMON,	"ringwraiths",		0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
RSF(S_UNIQUE,   RST_SUMMON,	"his servants",		0,	0,	0,			0,				FALSE,	100,	"summons",				RV(0,0,0,0),	RV(0,0,0,0),	"mumbles")
