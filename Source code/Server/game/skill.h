//Search
	SKILL_HORSE			= 130,	// 승마 스킬
	SKILL_HORSE_SUMMON		= 131,	// 말 소환 스킬
//add after
#ifdef ENABLE_CONQUEROR_LEVEL
	SKILL_ROLE_PROFICIENCY		= 133,
	SKILL_INSIGHT		= 134,
#endif

//Search
	GUILD_SKILL_COUNT = GUILD_SKILL_END - GUILD_SKILL_START + 1,
#ifdef ENABLE_WOLFMAN_CHARACTER
	// 수인족 스킬
	SKILL_CHAYEOL		= 170,			
	SKILL_SALPOONG		= 171,		
	SKILL_GONGDAB		= 172,			
	SKILL_PASWAE		= 173,			
	SKILL_JEOKRANG		= 174,			
	SKILL_CHEONGRANG	= 175,		
#endif

//add after
#ifdef ENABLE_CONQUEROR_LEVEL
	SKILL_FINISH		= 176,
	SKILL_ILGWANGPYO		= 177,
	SKILL_PUNGLOEPO		= 178,
	SKILL_GEOMAGGWI		= 179,
	SKILL_MABEOBAGGWI		= 180,
	SKILL_METEO		= 181,
	SKILL_CHEONUN		= 182,
#ifdef ENABLE_WOLFMAN_CHARACTER
	SKILL_ILIPUNGU		= 183,
#endif
#endif

//Search
};

class CSkillProto
{
	
//add before

#ifdef ENABLE_CONQUEROR_LEVEL
	SKILL_HIT_ATTRIBUTE		= 246,
#endif

};
