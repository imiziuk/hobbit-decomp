
void __fastcall FUN_0045cae0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = __ftol();
  FUN_00588ff0(*(undefined4 *)(param_1 + 0xa8));
  iVar2 = FUN_00589010(*(undefined4 *)(param_1 + 0xa8),&local_8);
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_004021c0(local_8,local_4);
    if (iVar2 == 0) {
LAB_0045cb5c:
      uVar4 = *(undefined4 *)(param_1 + 0xa8);
LAB_0045cba6:
      FUN_00588dc0(uVar4,local_8,local_4);
    }
    else {
      if ((*(ushort *)(iVar2 + 0x7a) & 0x40) == 0) {
        if ((*(char *)(iVar2 + 0x7c) != '\x06') && (*(char *)(iVar2 + 0x7c) != '\x05'))
        goto LAB_0045cb5c;
        if ((int)((uint)*(byte *)(iVar2 + 0x80) + iVar1) < 0xff) {
          cVar3 = *(byte *)(iVar2 + 0x80) + (char)iVar1;
        }
        else {
          cVar3 = -1;
        }
        *(char *)(iVar2 + 0x80) = cVar3;
        if (cVar3 != -1) goto LAB_0045cbae;
        uVar4 = *(undefined4 *)(param_1 + 0xa8);
        goto LAB_0045cba6;
      }
      *(ushort *)(iVar2 + 0x7a) = *(ushort *)(iVar2 + 0x7a) & 0xffbf;
    }
LAB_0045cbae:
    iVar2 = FUN_00589010(*(undefined4 *)(param_1 + 0xa8),&local_8);
  } while( true );
}

