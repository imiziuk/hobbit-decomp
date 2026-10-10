
void FUN_006aab60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_44 = DAT_007560e0;
  iVar1 = FUN_00647cf0(param_1);
  iVar2 = FUN_00647cf0(&local_44);
  if (iVar1 + iVar2 < 0x41) {
    FUN_00647d70(local_40,param_1,0x40);
    FUN_00647e00(local_40,&local_44,7);
  }
  iVar1 = FUN_006aaa90(local_40);
  if (iVar1 == 0) {
    FUN_006aaa90(param_1);
  }
  return;
}

