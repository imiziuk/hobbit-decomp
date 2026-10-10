
void __thiscall FUN_004d6080(int *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_258 [8];
  char local_250 [512];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_50 = 0x7f7fffff;
  local_4c = 0x7f7fffff;
  local_48 = 0x7f7fffff;
  if (param_2 == 1) {
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_258[0] = '\a';
    local_258[1] = '\0';
    local_258[2] = '\0';
    local_258[3] = '\0';
    pcVar2 = (char *)FUN_005496c0(s_chest_black_rgeom_0072db10,s_Props_00720224);
    pcVar3 = local_250;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*param_1 + 0xb4))(s_Geometry_Resource_007299e4,local_258);
    pcVar2 = (char *)FUN_005496c0(s_chest_black_anim_0072dafc,s_Props_00720224);
    pcVar3 = local_258;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else if (param_2 == 2) {
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    local_258[0] = '\a';
    local_258[1] = '\0';
    local_258[2] = '\0';
    local_258[3] = '\0';
    pcVar2 = (char *)FUN_005496c0(s_chest_gold_rgeom_0072db34,s_Props_00720224);
    pcVar3 = local_250;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*param_1 + 0xb4))(s_Geometry_Resource_007299e4,local_258);
    pcVar2 = (char *)FUN_005496c0(s_chest_gold_anim_0072db24,s_Props_00720224);
    pcVar3 = local_258;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else {
    local_44 = 0xff7fffff;
    local_40 = 0xff7fffff;
    local_3c = 0xff7fffff;
    local_258[0] = '\a';
    local_258[1] = '\0';
    local_258[2] = '\0';
    local_258[3] = '\0';
    pcVar2 = (char *)FUN_005496c0(s_chest_wood_rgeom_0072d9a0,s_Props_00720224);
    pcVar3 = local_250;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*param_1 + 0xb4))(s_Geometry_Resource_007299e4,local_258);
    pcVar2 = (char *)FUN_005496c0(s_chest_wood_anim_0072db48,s_Props_00720224);
    pcVar3 = local_258;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  (**(code **)(*param_1 + 0xb4))(s_Animation_Resource_00724f6c,&stack0xfffffda0);
  param_1[100] = param_2;
  return;
}

