
void FUN_00419620(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  uVar1 = FUN_0052ac90();
  iVar2 = FUN_00647e40(uVar1,&DAT_0071fe94);
  if (iVar2 == 0) {
    FUN_00647d10(local_80,s_Audio_0071ce88);
  }
  else {
    FUN_0064f190(local_80,s_Audio__s_0071fe88,uVar1);
  }
  uVar1 = FUN_005496c0(param_2,local_80);
  FUN_00647d10(param_1,uVar1);
  return;
}

