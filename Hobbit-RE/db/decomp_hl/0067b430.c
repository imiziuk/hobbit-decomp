
int __fastcall FUN_0067b430(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00655850();
  puVar2 = (undefined4 *)&DAT_00806ba8;
  for (iVar1 = 0x3b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}

