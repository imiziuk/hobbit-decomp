
void __fastcall FUN_004540f0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_10c;
  undefined4 local_10b [63];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d00db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  bVar1 = *(byte *)(param_1 + 0x7f);
  local_10c = 0;
  local_4 = 0;
  puVar3 = local_10b;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(byte *)(param_1 + 0x7f) = bVar1 | 1;
  FUN_00640420();
  FUN_00640420();
  FUN_00640420();
  FUN_00640480();
  FUN_0064a2e0();
  FUN_00649b20(&local_10c);
  FUN_00453ce0();
  FUN_004aa740();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

