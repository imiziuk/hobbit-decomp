
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056b420(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x714) == 0) {
    FUN_00571230();
    FUN_0045c360(param_1);
    FUN_00429100();
    if (*(int *)(param_1 + 0x498) != 0) {
      piVar1 = (int *)FUN_0041bcc0();
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
      fStack_4 = (float)puVar2[2] - _DAT_006f3eb0;
      fStack_8 = (float)puVar2[1] + _DAT_006f3eb0;
      uStack_c = *puVar2;
      FUN_00671670(&uStack_c);
      uStack_c = 0x3f490fdb;
      fStack_8 = 0.0;
      fStack_4 = 0.0;
      FUN_006716a0(&uStack_c);
    }
  }
  else {
    FUN_00671670(param_1 + 0x718);
    FUN_006716a0(param_1 + 0x724);
    FUN_006715c0(*(undefined4 *)(*(int *)(param_1 + 0x730) + 0xe0));
    FUN_00671650(*(undefined4 *)(*(int *)(param_1 + 0x730) + 0xe8),
                 *(undefined4 *)(*(int *)(param_1 + 0x730) + 0xe4));
  }
  FUN_0065f910(param_1);
  FUN_0065f960(param_1,0);
  FUN_0065fc10(0);
  return;
}

