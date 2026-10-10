
bool __fastcall FUN_00592220(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 0:
  case 1:
    iVar1 = FUN_00592920();
    return *(int *)(iVar1 + 0x1d0) != 0;
  case 2:
    return (bool)3;
  case 3:
    return (bool)2;
  default:
    iVar1 = FUN_00592920();
    return *(int *)(iVar1 + 0x1d0) != 0;
  }
}

