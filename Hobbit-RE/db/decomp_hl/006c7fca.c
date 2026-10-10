
undefined4 __fastcall FUN_006c7fca(undefined4 param_1)

{
  undefined *puVar1;
  size_t _Size;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = PTR_FUN_0075b2ec;
  iVar3 = *DAT_00815d54;
  piVar4 = DAT_00815d54;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    _Size = (*(code *)puVar1)(1,0,iVar3,0xffffffff,0,0,0,0);
    if (((_Size == 0) || (pvVar2 = _malloc(_Size), pvVar2 == (void *)0x0)) ||
       (iVar3 = (*(code *)puVar1)(1,0,*piVar4,0xffffffff,pvVar2,_Size,0,0), iVar3 == 0)) break;
    FUN_006cbe6b(param_1,0);
    iVar3 = piVar4[1];
    piVar4 = piVar4 + 1;
  }
  return 0xffffffff;
}

