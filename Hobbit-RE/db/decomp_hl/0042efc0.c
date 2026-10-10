
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042efc0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_34;
  undefined1 auStack_2c [4];
  undefined1 local_28 [4];
  float fStack_24;
  undefined1 local_10 [16];
  
  (**(code **)(*param_1 + 0x140))(param_1 + 5,0,local_28,local_10);
  if (param_1[0x2a] != 0 || param_1[0x2b] != 0) {
    iVar4 = FUN_004021c0(param_1[0x2a],param_1[0x2b]);
    if (iVar4 != 0) {
      if (*(char *)(iVar4 + 0x7c) == '\x0e') {
        FUN_00491ad0(auStack_2c);
      }
      if ((*(char *)(iVar4 + 0x7c) == '.') && (*(char *)(iVar4 + 0x154) < '\0')) {
        FUN_0043a3f0(0x1b,s_C__projects_meridian_Support_Obj_00720e1c,0x47c);
        return;
      }
    }
  }
  if ((float)param_1[6] - fStack_34 < *(float *)(param_1[0x114] + 0x4c) !=
      ((float)param_1[6] - fStack_34 == *(float *)(param_1[0x114] + 0x4c))) {
    FUN_0043a3f0(7,s_C__projects_meridian_Support_Obj_00720e1c,0x487);
    return;
  }
  fStack_24 = (float)param_1[0x123];
  fVar1 = (float)param_1[0x121] * _DAT_006e99a4;
  param_1[0x167] = param_1[0x167] + 1;
  fVar2 = (float)param_1[0x122] * _DAT_006e99a4;
  fVar3 = fStack_24 * _DAT_006e99a4;
  param_1[0x160] = 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x164] = 1;
  param_1[0x122] = (int)fVar2;
  param_1[0x121] = (int)fVar1;
  param_1[0x123] = (int)fVar3;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar1 < DAT_006e92e8 != (NAN(fVar1) || NAN(DAT_006e92e8))) {
    param_1[0x160] = 1;
    param_1[0x164] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x167] = param_1[0x167] + 1;
    param_1[0x121] = 0;
    param_1[0x122] = 0;
    param_1[0x123] = 0;
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00720e1c,0x494);
  }
  return;
}

