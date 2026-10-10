
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a57e0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1[0xc0] + 0xc0) = 1;
  FUN_005922b0();
  param_1[0xa7] = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (*(float *)(iVar1 + 4) < _DAT_006ede8c != (*(float *)(iVar1 + 4) == _DAT_006ede8c)) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
    uStack_c = *puVar2;
    uStack_4 = puVar2[2];
    uStack_8 = 0xc788b800;
    (**(code **)(*param_1 + 0x14))(&uStack_c,0);
  }
  param_1[0xa4] = param_1[0xa5];
  param_1[0x11e] = param_1[0x11e] & 0xffffffef;
  param_1[0x9a] = param_1[0x9a] & 0xfffdffffU | 0x10000;
  FUN_004a6630(1);
  return;
}

