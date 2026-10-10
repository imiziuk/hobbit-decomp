
void __fastcall FUN_00425b70(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  if ((iVar3 != 0) &&
     (((cVar1 = *(char *)(iVar3 + 0x7c), cVar1 == '\x0e' || (cVar1 == '\x05')) || (cVar1 == '\x06'))
     )) {
    uVar2 = FUN_004d1120();
    switch(uVar2) {
    case 1:
      FUN_00659600(s_StickPlantStone_00720aac,1);
      return;
    case 2:
      FUN_00659600(s_StickPlantDirt_00720a9c,1);
      return;
    case 3:
      FUN_00659600(s_StickPlantLeaves_00720a88,1);
      return;
    case 4:
      FUN_00659600(s_StickPlantGrass_00720a78,1);
      return;
    case 5:
      FUN_00659600(s_StickPlantWater_00720a68,1);
      return;
    case 6:
    case 9:
      FUN_00659600(s_StickPlantWood_00720a34,1);
      break;
    case 7:
      FUN_00659600(s_StickPlantCoin_00720a58,1);
      return;
    case 8:
      FUN_00659600(s_StickPlantWetGrass_00720a44,1);
      return;
    }
  }
  return;
}

