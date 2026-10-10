
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047de40(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  bool bVar7;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  FUN_0064e870(6,s_CINEMA__Skipping_animation_00728590);
  bVar7 = (*(byte *)(param_1 + 4) & 2) == 0;
  if (bVar7) {
    (**(code **)(*param_1 + 4))();
  }
  piVar3 = (int *)FUN_004021c0(param_1[8],param_1[9]);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x154))();
    fVar2 = *(float *)(iVar4 + 0xdc);
    if (bVar7) {
      fVar2 = DAT_006e92e4;
    }
    iStack_28 = *(int *)(iVar4 + 0xd8);
    uStack_2c = 0;
    FUN_00540900((((float)iStack_28 - _DAT_006e999c) - fVar2) * _DAT_006ed17c,&fStack_c,&uStack_2c);
    iVar5 = FUN_0047f500();
    if ((iVar5 == 0) || (param_1[0x16] == 0)) {
      pfVar6 = (float *)(**(code **)(*piVar3 + 0x28))();
      fStack_10 = fStack_4 + pfVar6[2];
      fStack_14 = fStack_8 + pfVar6[1];
      fStack_18 = fStack_c + *pfVar6;
      (**(code **)(*piVar3 + 0x14))(&fStack_18,0);
    }
    else {
      *(undefined4 *)(iVar4 + 300) = 1;
      *(undefined4 *)(iVar4 + 0x13c) = 1;
      *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
      *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      (**(code **)(*piVar3 + 0xf0))(&uStack_24);
      if (*(int *)(iVar4 + 0x13c) != 0) {
        FUN_005423d0();
      }
      puVar1 = *(undefined4 **)(iVar4 + 0x140);
      uStack_1c = *puVar1;
      fStack_18 = (float)puVar1[1];
      fStack_14 = (float)puVar1[2];
      (**(code **)(*piVar3 + 0x14))(&uStack_1c,0);
    }
  }
  FUN_0047dcc0();
  FUN_004754d0();
  return;
}

