
void __fastcall FUN_0067a7d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00648600(param_1,0,0x7a8);
  iVar1 = 0;
  piVar4 = (int *)(param_1 + 0xbc);
  do {
    *piVar4 = iVar1;
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 0x46;
  } while (iVar1 < 7);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  iVar1 = thunk_FUN_0064ff70(0xfc000,s_C__projects_meridian_xCore_entro_00752cd8,0x68);
  *(int *)(param_1 + 0x7ac) = iVar1;
  piVar4 = (int *)(param_1 + 0xf0);
  local_14 = 7;
  do {
    puVar2 = (undefined4 *)operator_new(0x7c);
    puVar6 = (undefined4 *)0x0;
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar6 = puVar2 + 1;
      *puVar2 = 1;
      FUN_006c043b(puVar6,0x78,1,FUN_00680660,FUN_006806a0);
    }
    local_4 = 0xffffffff;
    piVar4[-0xc] = (int)puVar6;
    iVar5 = 2;
    piVar3 = piVar4;
    do {
      *piVar3 = iVar1;
      iVar1 = iVar1 + 0x12000;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    piVar4 = piVar4 + 0x46;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  ExceptionList = local_c;
  return;
}

