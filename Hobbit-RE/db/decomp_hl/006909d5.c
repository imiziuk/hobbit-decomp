
void FUN_006909d5(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *unaff_ESI;
  undefined1 local_8 [4];
  
  FUN_00690884(local_8);
  FUN_006908b9();
  FUN_00690884(local_8);
  puVar1 = unaff_ESI + 1;
  FUN_006908b9(puVar1);
  uVar2 = *unaff_ESI;
  if (*puVar1 < uVar2 != (param_3 == 0x10)) {
    *unaff_ESI = *puVar1;
    *puVar1 = uVar2;
  }
  FUN_006908e9(local_8);
  FUN_00690852(local_8);
  FUN_006908e9(local_8);
  FUN_00690852(local_8);
  return;
}

