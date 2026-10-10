
void __fastcall FUN_00651260(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(&DAT_006f6cf0 + *(char *)((int)param_1 + 0x1d) * 0x7c) == 4) &&
     ((*(byte *)((int)param_1 + 0x1b) & 2) != 0)) {
    cVar1 = (char)param_1[7];
    iVar3 = 0;
    if (cVar1 != -1 && -1 < cVar1 + 1) {
      do {
        iVar2 = *param_1;
        iVar5 = iVar2;
        if ((iVar3 != -1) && (cVar1 != '\0')) {
          iVar5 = *(int *)(iVar2 + iVar3 * 8) + iVar2;
        }
        if (cVar1 == '\0') {
          iVar2 = param_1[2];
        }
        else {
          iVar2 = *(int *)(&DAT_006f6cf0 + *(char *)((int)param_1 + 0x1d) * 0x7c) *
                  (int)*(short *)(iVar2 + 6 + iVar3 * 8) * (int)*(short *)(iVar2 + 4 + iVar3 * 8) >>
                  3;
        }
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            *(byte *)(iVar4 + iVar5) = *(byte *)(iVar4 + iVar5) >> 4 | *(byte *)(iVar4 + iVar5) << 4
            ;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        cVar1 = (char)param_1[7];
        iVar3 = iVar3 + 1;
      } while (iVar3 < cVar1 + 1);
    }
    *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xfd;
  }
  return;
}

