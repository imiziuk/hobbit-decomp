
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c3d20(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [60];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d48ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_rigid_instance__UpdateBBoxAndMov_0072cd8c);
  local_4 = 0;
  (**(code **)(*param_1 + 0x40))();
  iStack_9c = param_1[0x11];
  iStack_98 = param_1[0x12];
  iStack_94 = param_1[0x13];
  piVar1 = param_1 + 0x11;
  iStack_90 = param_1[0x14];
  iStack_8c = param_1[0x15];
  iStack_88 = param_1[0x16];
  iVar4 = (**(code **)(*param_1 + 0xf4))();
  if (iVar4 == 0) {
    FUN_00401f00((float)param_1[5] - _DAT_006e9988,(float)param_1[6] - _DAT_006e9988,
                 (float)param_1[7] - _DAT_006e9988);
    FUN_004357e0(&fStack_a8);
    uVar5 = FUN_00401f00(0x42480000,0x42480000,0x42480000);
    uVar5 = FUN_00402130(auStack_64,param_1 + 5,uVar5);
    FUN_004357e0(uVar5);
    *piVar1 = iStack_7c;
    param_1[0x12] = iStack_78;
    param_1[0x13] = iStack_74;
    FUN_004357e0(auStack_70);
  }
  else {
    iVar4 = FUN_004c71a0();
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x118))(auStack_4c);
      FUN_004d1ff0(piVar1,auStack_4c);
    }
    else {
      piVar2 = (int *)param_1[0x50];
      uVar3 = piVar2[1] * 2;
      if (((uVar3 ^ piVar2[1]) & 0x7fffffff ^ uVar3) == 0xffffffff) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = FUN_00549470(piVar2 + 1);
      }
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = FUN_0053cb40(s__coll_0072c884,1);
        if (iVar4 == -1) {
          iVar4 = 0;
        }
      }
      (**(code **)(*param_1 + 0x114))(auStack_4c,iVar4);
      FUN_004d1ff0(piVar1,auStack_4c);
    }
  }
  param_1[0xb] = *piVar1;
  param_1[0xc] = param_1[0x12];
  param_1[0xd] = param_1[0x13];
  FUN_004357e0(param_1 + 0x14);
  fStack_a0 = -(float)param_1[7];
  fStack_a4 = -(float)param_1[6];
  fStack_a8 = -(float)param_1[5];
  param_1[0xb] = (int)(fStack_a8 + (float)param_1[0xb]);
  param_1[0xc] = (int)(fStack_a4 + (float)param_1[0xc]);
  param_1[0xd] = (int)(fStack_a0 + (float)param_1[0xd]);
  FUN_0042faf0(&fStack_a8);
  (**(code **)(*param_1 + 0x44))();
  (**(code **)(*param_1 + 0x9c))(0);
  FUN_004c3500(&fStack_a0,0);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

