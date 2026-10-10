
void FUN_00446c00(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf9f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00659600(s_QuestItemPickup_0071df88,1);
  iVar3 = 0;
  iVar4 = 0;
  if (0 < DAT_0076f660) {
    do {
      if (((iVar4 != -1) && (iVar1 = *(int *)(DAT_0076f648 + iVar4 * 0x14), iVar1 != 0)) &&
         (*(char *)(iVar1 + 0x7c) == '\"')) {
        FUN_004b0e70(local_38);
        local_4 = 0;
        fVar5 = (float10)FUN_004b0f50();
        iVar3 = iVar3 + 1;
        uVar2 = FUN_00434eb0(local_38);
        switch(uVar2) {
        case 1:
        case 0xf:
          FUN_00434d10(1,(float)fVar5);
          break;
        case 2:
          fVar5 = (float10)FUN_004b0f50();
          FUN_00434d10(2,(float)fVar5);
          break;
        default:
          FUN_00434d70(local_38);
          break;
        case 4:
          FUN_00434d10(4,0x40800000);
          break;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          fVar5 = (float10)FUN_004b0f50();
          FUN_00434d10(9,(float)fVar5);
          fVar5 = (float10)FUN_004b0f50();
          FUN_00434d10(7,(float)fVar5);
          fVar5 = (float10)FUN_004b0f50();
          FUN_00434d10(8,(float)fVar5);
        }
        local_4 = 0xffffffff;
        FUN_00649ba0();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_0076f660);
  }
  FUN_0064f020(s__d_pickups_grabbed_007244bc,iVar3);
  ExceptionList = local_c;
  return;
}

