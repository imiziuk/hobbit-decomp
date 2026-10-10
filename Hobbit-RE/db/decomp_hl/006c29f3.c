
LPVOID FUN_006c29f3(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  LPVOID local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fd550;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  uVar2 = param_1 * param_2;
  uVar3 = uVar2;
  ExceptionList = &local_14;
  if (uVar2 < 0xffffffe1) {
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
    ExceptionList = &local_14;
  }
  do {
    local_24 = (LPVOID)0x0;
    if (uVar3 < 0xffffffe1) {
      if (DAT_00816370 == 3) {
        if (uVar2 <= DAT_00816360) {
          FUN_006c56f9(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_006c8c35(uVar2);
          local_8 = 0xffffffff;
          FUN_006c2a8c();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_006c2ae0;
LAB_006c2acf:
          _memset(local_24,0,_Size);
        }
LAB_006c2adb:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_00816370 != 2) || (DAT_0075ab74 < uVar3)) goto LAB_006c2adb;
        FUN_006c56f9(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_006c96d8(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_006c2b15();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_006c2acf;
      }
LAB_006c2ae0:
      local_24 = HeapAlloc(DAT_0081636c,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_00815f54 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_006c9aad(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}

