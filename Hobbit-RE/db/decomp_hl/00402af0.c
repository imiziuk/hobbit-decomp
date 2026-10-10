
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00402af0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if (param_1[0x47] == 0) {
    iVar2 = FUN_0054c0f0(s_Minecart_arrow_001_0071d0f0,1);
    piVar4 = param_1 + 0xb0;
    *piVar4 = *(int *)(iVar2 + 8);
    param_1[0xb1] = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0054c0f0(s_Minecart_arrow_002_0071d0dc,1);
    param_1[0xb2] = *(int *)(iVar2 + 8);
    param_1[0xb3] = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0054c0f0(s_Minecart_arrow_004_0071d0c8,1);
    param_1[0xb4] = *(int *)(iVar2 + 8);
    param_1[0xb5] = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0054c0f0(s_Minecart_arrow_003_0071d0b4,1);
    param_1[0xb6] = *(int *)(iVar2 + 8);
    param_1[0xb7] = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0054c0f0(s_Minecart_arrow_005_0071d0a0,1);
    param_1[0xb8] = *(int *)(iVar2 + 8);
    param_1[0xb9] = *(int *)(iVar2 + 0xc);
    if (*piVar4 != 0 || param_1[0xb1] != 0) {
      iVar2 = 0;
      do {
        FUN_004062d0(iVar2);
        iVar3 = FUN_00406bf0(*piVar4,piVar4[1]);
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 2;
        *(undefined1 *)(iVar3 + 0x85) = 0xff;
        *(undefined1 *)(iVar3 + 0x84) = 0x80;
        *(undefined1 *)(iVar3 + 0x83) = 0x80;
        *(undefined1 *)(iVar3 + 0x82) = 0x80;
      } while (iVar2 < 5);
    }
    if (*param_1 == 0 && param_1[1] == 0) {
      piVar4 = (int *)FUN_0054c0f0(s_BilboMinecart_001_0071d08c,1);
      *param_1 = piVar4[2];
      param_1[1] = piVar4[3];
    }
    else {
      piVar4 = (int *)FUN_00406bf0(*param_1,param_1[1]);
    }
    *(ushort *)((int)piVar4 + 0x15a) = *(ushort *)((int)piVar4 + 0x15a) & 0xdfff ^ 0x2000;
    if (param_1[2] == 0) {
      uVar5 = FUN_005496c0(s_MineCartRideAnims_charanim_0071d060,s_MineCartRide_0071d07c);
      FUN_004048c0(uVar5);
      if (param_1[2] == 0) {
        return;
      }
    }
    (**(code **)(*piVar4 + 0xd0))(s_Inst_Swordlight_MineCartA_rgeom_0071d040);
    FUN_0064cc30();
    FUN_0064cc00();
    FUN_0064cc30();
    FUN_0064cc00();
    param_1[0x67] = 0;
    param_1[0x3c] = 0;
    param_1[0x40] = 0;
    FUN_0064cc30();
    FUN_0064cc50();
    fVar1 = _DAT_006e9318 + DAT_006e92e8;
    param_1[0x47] = 1;
    param_1[0xd3] = (int)fVar1;
  }
  return;
}

