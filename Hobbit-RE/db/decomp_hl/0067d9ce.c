
undefined4 FUN_0067d9ce(undefined4 param_1,HANDLE param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [60];
  
  iVar1 = GetObjectA(param_2,0x3c,local_40);
  if (iVar1 == 0) {
    uVar2 = 0x8876086c;
  }
  else {
    uVar2 = FUN_0067d8f0(param_1,local_40,param_3);
  }
  return uVar2;
}

