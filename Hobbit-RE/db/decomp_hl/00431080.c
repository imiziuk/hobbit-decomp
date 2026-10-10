
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00431080(int *param_1,float param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar3;
  undefined4 uVar4;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (param_1[0x17b7] == 0) {
    fVar2 = (float10)FUN_00647b30(0xbf800000,0x3f800000);
    param_2 = (float)fVar2;
    fVar2 = (float10)FUN_00647b30(0xbf800000,0x3f800000);
    local_1c = (float)(fVar2 * (float10)_DAT_006ebffc);
    fVar2 = (float10)FUN_00647b30(0,0x3f800000);
    param_3 = (float)(fVar2 * (float10)_DAT_006ebfe8);
    fVar2 = (float10)(**(code **)(*param_1 + 0x10c))();
    fStack_8 = (float)fVar2;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_10 = 1.0;
    FUN_00428790(0);
    FUN_004286f0(0);
    FUN_00428740(fStack_8);
    fStack_c = param_2 * _DAT_006e9578;
    FUN_0064c8e0(0,&fStack_20,&param_2);
    fVar1 = fStack_14 * fStack_20;
    fStack_14 = fStack_18 * fStack_20 + fStack_14 * param_2;
    fStack_18 = param_2 * fStack_18 - fVar1;
    FUN_004286f0(fStack_c);
    FUN_00428740(local_1c);
    param_1[0x17b1] = (int)(fStack_18 * param_3 + (float)param_1[5]);
    param_1[0x17b3] = (int)(fStack_10 * param_3 + (float)param_1[7]);
    param_1[0x17b2] = (int)(fStack_14 * param_3 + (float)param_1[6]);
    param_1[0x17b4] = 0;
    param_1[0x17b5] = 0;
    param_1[0x17b7] = 1;
    return;
  }
  fVar1 = (float)param_1[0x17b8];
  param_1[0x17b8] = (int)(fVar1 - (float)param_1[0x248]);
  if (DAT_006e92e4 < fVar1 - (float)param_1[0x248]) {
    uVar3 = param_2;
    uVar4 = param_3;
    FUN_004357e0(param_1 + 0x17b1);
    FUN_00430b90(in_stack_ffffffc4,in_stack_ffffffc8,in_stack_ffffffcc,uVar3,uVar4);
    return;
  }
  param_1[0x17b8] = 0;
  param_1[0x17b6] = 0;
  param_1[0x17b7] = 0;
  return;
}

