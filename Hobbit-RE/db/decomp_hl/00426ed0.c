
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00426ed0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  
  iVar2 = param_1[0x235];
  if (((((iVar2 == 0x10) || (iVar2 == 0x16)) || (iVar2 == 0xc)) ||
      ((iVar2 == 0xd || (iVar2 == 0xe)))) || ((iVar2 == 0x23 || (iVar2 == 0x28)))) {
LAB_0042716f:
    if ((DAT_006e92e4 < (float)param_1[0x17ce]) &&
       ((float)param_1[0x17cf] < DAT_006e92e4 != ((float)param_1[0x17cf] == DAT_006e92e4))) {
      iVar2 = *param_1;
      param_1[0x17cf] = *(int *)(param_1[0x114] + 0x1c8);
      uVar3 = __ftol();
      (**(code **)(iVar2 + 0x128))(uVar3);
      iVar2 = __ftol();
      FUN_00434d10(0xa5,(float)iVar2);
      FUN_0044c120(9,0x3f800000);
    }
    goto LAB_004271f7;
  }
  piVar1 = param_1 + 0x17bd;
  if (param_1[0x17bf] == -1) goto LAB_00426f96;
  FUN_00549470(param_1 + 0x17be);
  FUN_00549580(param_1 + 0x17be);
  iVar2 = FUN_0053cc70(s_equip_weapon_007202d8);
  if (param_1[0x17bf] == iVar2) goto LAB_0042716f;
  if (param_1[0x17bf] == -1) {
LAB_00426f96:
    if ((DAT_006e92e4 < (float)param_1[0x17ce]) &&
       ((float)param_1[0x17cf] < DAT_006e92e4 != ((float)param_1[0x17cf] == DAT_006e92e4))) {
      FUN_00549470(param_1 + 0x17be);
      FUN_00549580(param_1 + 0x17be);
      uVar5 = 0x3f800000;
      uVar3 = FUN_0053cc70(s_damage_poison_00720b7c);
      FUN_005434b0(uVar3,uVar5);
      (**(code **)(*piVar1 + 0x10))(0);
      fVar4 = (float10)FUN_0064c6b0(0,(float)param_1[0x17c0] - DAT_006e92e8);
      param_1[0x17c1] = (int)(float)fVar4;
      iVar2 = *param_1;
      param_1[0x17cf] = *(int *)(param_1[0x114] + 0x1c8);
      uVar3 = __ftol();
      (**(code **)(iVar2 + 0x128))(uVar3);
      iVar2 = __ftol();
      FUN_00434d10(0xa5,(float)iVar2);
      FUN_0044c120(9,0x3f800000);
    }
  }
  else {
    FUN_00549470(param_1 + 0x17be);
    FUN_00549580(param_1 + 0x17be);
    iVar2 = FUN_0053cc70(s_damage_poison_00720b7c);
    if (param_1[0x17bf] != iVar2) goto LAB_00426f96;
  }
  fVar6 = (float)param_1[0x17c1];
  if (fVar6 < _DAT_006e99bc == (fVar6 == _DAT_006e99bc)) {
    if ((fVar6 <= _DAT_006e99bc) || (fVar6 < _DAT_006e99d4 == (NAN(fVar6) || NAN(_DAT_006e99d4)))) {
      if (fVar6 < _DAT_006e99d4) goto LAB_00427106;
      fVar4 = (float10)(**(code **)(*piVar1 + 0x14))();
      fVar6 = (float)(fVar4 - (float10)(float)param_1[0x248] * (float10)_DAT_006e958c);
    }
    else {
      fVar6 = 1.0;
    }
    (**(code **)(*piVar1 + 0x10))(fVar6);
  }
  else {
    fVar4 = (float10)(**(code **)(*piVar1 + 0x14))();
    (**(code **)(*piVar1 + 0x10))
              ((float)((float10)(float)param_1[0x248] * (float10)_DAT_006e958c + fVar4));
  }
LAB_00427106:
  if (param_1[0x17bf] != -1) {
    FUN_00549470(param_1 + 0x17be);
    FUN_00549580(param_1 + 0x17be);
    iVar2 = FUN_0053cc70(s_damage_poison_00720b7c);
    if ((param_1[0x17bf] == iVar2) &&
       ((0 < param_1[0x17c2] ||
        ((float)(param_1[0x17c0] + -2) < (float)param_1[0x17c1] !=
         ((float)(param_1[0x17c0] + -2) == (float)param_1[0x17c1]))))) {
      (**(code **)(*piVar1 + 8))();
    }
  }
LAB_004271f7:
  if ((DAT_006e92e4 < (float)param_1[0x17ce]) && (DAT_006e92e4 < (float)param_1[0x17cf])) {
    param_1[0x17cf] = (int)((float)param_1[0x17cf] - (float)param_1[0x248]);
  }
  if ((float)param_1[0x17ce] < DAT_006e92e4 != ((float)param_1[0x17ce] == DAT_006e92e4)) {
    (**(code **)(param_1[0x17bd] + 8))();
    (**(code **)(param_1[0x17bd] + 0x10))(0);
    FUN_00427270();
    return;
  }
  return;
}

