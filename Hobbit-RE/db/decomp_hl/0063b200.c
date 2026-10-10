
void __fastcall FUN_0063b200(undefined4 *param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  float fVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint *puVar10;
  float10 extraout_ST0;
  float local_698;
  float local_694;
  float local_690;
  float local_68c;
  float local_688;
  float local_684;
  int local_680;
  int local_67c;
  float local_678;
  float local_674;
  float local_670;
  int local_66c;
  int local_668;
  float local_664;
  float local_660;
  float local_65c;
  float local_658;
  float local_654;
  uint *local_650;
  float local_64c;
  float local_648;
  float local_644;
  float local_63c;
  float local_638;
  float local_628;
  float local_61c;
  float local_610;
  float local_604;
  float local_600 [192];
  float local_300 [192];
  
  if (1 < (int)param_1[3]) {
    FUN_0063b7d0(param_1[1],local_600);
    iVar9 = FUN_0063b7d0(*param_1,local_300);
    puVar10 = param_1 + 5;
    uVar6 = *puVar10 * 2;
    local_67c = 0;
    local_650 = puVar10;
    if ((((uVar6 ^ *puVar10) & 0x7fffffff ^ uVar6) == 0xffffffff) ||
       (local_67c = FUN_00549470(puVar10), local_67c == 0)) {
      FUN_0066c3a0(3,(*(byte *)(param_1 + 10) & 2) << 6 | 0x24);
    }
    else {
      FUN_0066c3a0(3,(*(byte *)(param_1 + 10) & 2) << 6 | 0x26);
      FUN_0066db80(local_67c,0);
    }
    uVar2 = *(undefined1 *)((int)param_1 + 0x12);
    uVar3 = *(undefined1 *)((int)param_1 + 0x11);
    uVar4 = *(undefined1 *)(param_1 + 4);
    uVar7 = __ftol();
    local_668 = iVar9 + -1;
    if (0 < local_668) {
      local_654 = (float)local_668;
      local_680 = 0;
      local_66c = 0;
      do {
        iVar9 = local_680;
        local_66c = local_66c + 1;
        fVar5 = (float)local_66c / local_654;
        uVar8 = __ftol();
        local_670 = *(float *)((int)local_600 + iVar9 + 8);
        local_660 = *(float *)((int)local_600 + iVar9 + 0x10);
        local_674 = *(float *)((int)local_600 + iVar9 + 4);
        local_65c = *(float *)((int)local_600 + iVar9 + 0x14);
        fVar1 = (float)(extraout_ST0 * (float10)(float)param_1[7] + (float10)(float)param_1[6]);
        local_64c = fVar5 * (float)param_1[7] + (float)param_1[6];
        local_678 = *(float *)((int)local_600 + iVar9);
        local_664 = *(float *)((int)local_600 + iVar9 + 0xc);
        local_68c = *(float *)((int)local_300 + iVar9);
        local_688 = *(float *)((int)local_300 + iVar9 + 4);
        local_684 = *(float *)((int)local_300 + iVar9 + 8);
        local_698 = *(float *)((int)local_300 + iVar9 + 0xc);
        local_694 = *(float *)((int)local_300 + iVar9 + 0x10);
        local_690 = *(float *)((int)local_300 + iVar9 + 0x14);
        if ((*(byte *)(param_1 + 10) & 1) != 0) {
          local_604 = local_670 - local_684;
          local_648 = (float)(((float10)local_678 - (float10)local_68c) * extraout_ST0);
          local_644 = (float)(((float10)local_674 - (float10)local_688) * extraout_ST0);
          local_68c = local_648 + local_68c;
          local_688 = local_644 + local_688;
          local_684 = (float)(extraout_ST0 * (float10)local_604 + (float10)local_684);
          local_628 = local_65c - local_690;
          local_63c = (local_664 - local_698) * fVar5;
          local_638 = (local_660 - local_694) * fVar5;
          local_698 = local_63c + local_698;
          local_694 = local_638 + local_694;
          local_690 = local_628 * fVar5 + local_690;
          local_61c = local_690;
          local_610 = local_684;
        }
        local_658 = fVar1;
        FUN_0066dd10(fVar1,0x3f800000);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_678);
        FUN_0066dd10(fVar1,0);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_68c);
        fVar5 = local_64c;
        FUN_0066dd10(local_64c,0);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar8,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_698);
        FUN_0066dd10(fVar1,0x3f800000);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_678);
        FUN_0066dd10(fVar5,0);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar8,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_698);
        FUN_0066dd10(fVar5,0x3f800000);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar8,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_664);
        FUN_0066dd10(fVar1,0x3f800000);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_678);
        FUN_0066dd10(fVar5,0);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar8,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_698);
        FUN_0066dd10(fVar1,0);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_68c);
        FUN_0066dd10(fVar1,0x3f800000);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar7,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_678);
        FUN_0066dd10(fVar5,0x3f800000);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar8,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_664);
        FUN_0066dd10(fVar5,0);
        FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar8,uVar2),uVar3),uVar4));
        FUN_0066de80(&local_698);
        local_680 = local_680 + 0xc;
        puVar10 = local_650;
        uVar7 = uVar8;
      } while (local_66c < local_668);
    }
    FUN_0066d9a0();
    if (local_67c != 0) {
      FUN_00549580(puVar10);
    }
  }
  return;
}

