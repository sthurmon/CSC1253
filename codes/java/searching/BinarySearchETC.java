import java.util.Arrays;

class ReturnInfo {
  int maxItemInfo, numComparisons;
}

public class BinarySearchETC {

  int recDepth, latestCallNum;
  int[] nums;

/**
 * 1.)
 */
  BinarySearchETC(int[] nums) {
    this.nums = Arrays.copyOf(nums, nums.length);
    recDepth = latestCallNum = -1;
  }


/**
 * Auxiliary functions; it is *much* easier to refactor these.
 */
  public void printStart(int myCallNum, int left, int right) {
    System.out.println("start: myCallNum="+myCallNum+
     " nums["+left+".."+right+"]="
     +Arrays.toString(Arrays.copyOfRange(nums,left,right+1)));
  }

  public void printEnd(int myCallNum, int recDepth, int left, int right, int mii) {
    System.out.println("  end: myCallNum="+myCallNum+
    " (callsGenerated="+(latestCallNum-myCallNum)+")"+", recDepth="+(recDepth+1)+", maxItemIndex="+mii);
  }


/**
 * 2.)
 */
  public int maxItemIndex(int left, int right) {
    int myCallNum = ++latestCallNum;
    printStart(myCallNum, left, right);
    if (left  == right) { 
      printEnd(myCallNum, recDepth, left, right, left);
      return left;
    }
    else if (left+1 == right) {
      if   (nums[left] >= nums[right]) { 
        printEnd(myCallNum, recDepth, left, right, left);
        return left;
      }
      else { 
        printEnd(myCallNum, recDepth, left, right, right);
        return right;
      }
    }
    int  mid = (left + right)/2;
    recDepth++;
    int  leftMaxItemIndex = maxItemIndex(left,  mid);
    int rightMaxItemIndex = maxItemIndex(mid+1, right);
    recDepth--;
    if (nums[leftMaxItemIndex] >= nums[rightMaxItemIndex]) {
       printEnd(myCallNum, recDepth, left, right, leftMaxItemIndex);
       return leftMaxItemIndex;
    }
    printEnd(myCallNum, recDepth, left, right, rightMaxItemIndex);
    return rightMaxItemIndex;
  }


/**
 * 3.)
 */
  int binarySearch(int left, int right, int key) {
    System.out.println("binarySearch("+left+", "+right+", "+key+"):"+
      " nums["+left+".."+right+"] = "
      +Arrays.toString(Arrays.copyOfRange(nums, left, right+1)));
    int returnVal = -1;
    if (left == right) {
      if (nums[left] == key) 
        returnVal = left;
    } else if (left+1 == right) {
      if (nums[left] == key) 
        returnVal = left;
      else if (nums[right] == key) 
        returnVal = right;
    } else {
      int  mid = (left + right)/2;
      if (key < nums[mid]) {
        returnVal = binarySearch(left,  mid-1, key);
      } else if (key > nums[mid]) {
        returnVal = binarySearch(mid+1, right, key);
      }
    }
    return returnVal;
  }


/**
 * Auxiliary function for bonus.
 */
  public void extendedPrintEnd(int myCallNum, int recDepth, int left, int right, int mii, int nc) {
    System.out.println("  end: myCallNum="+myCallNum+
    " (callsGenerated="+(latestCallNum-myCallNum)+")"+", recDepth="+(recDepth+1)+", maxItemIndex="+mii+", numComparisons="+nc);
  }


/**
 * Bonus.
 */
  public ReturnInfo extendedMaxItemIndex(int left, int right) {
    ReturnInfo ri = new ReturnInfo();
    int myCallNum = ++latestCallNum;
    printStart(myCallNum, left, right);
    if (left  == right) { 
      ri.maxItemInfo = left;
      extendedPrintEnd(myCallNum, recDepth, left, right, left, ri.numComparisons);
      return ri;
    }
    else if (left+1 == right) {
      ri.numComparisons++;
      if   (nums[left] >= nums[right]) { 
        ri.maxItemInfo = left;
        extendedPrintEnd(myCallNum, recDepth, left, right, left, ri.numComparisons);
      }
      else { 
        ri.maxItemInfo = right;
        extendedPrintEnd(myCallNum, recDepth, left, right, right, ri.numComparisons);
      }
      return ri;
    }
    int mid = (left + right)/2;
    recDepth++;
    ReturnInfo  leftri = extendedMaxItemIndex(left,  mid);
    ReturnInfo rightri = extendedMaxItemIndex(mid+1, right);
    recDepth--;
    ri.numComparisons++;
    if (nums[leftri.maxItemInfo] >= nums[rightri.maxItemInfo]) {
       ri.maxItemInfo    = leftri.maxItemInfo;
       ri.numComparisons = ri.numComparisons + leftri.numComparisons + rightri.numComparisons;
       extendedPrintEnd(myCallNum, recDepth, left, right, leftri.maxItemInfo, ri.numComparisons);
       return ri;
    }
    ri.maxItemInfo    = rightri.maxItemInfo;
    ri.numComparisons = ri.numComparisons + leftri.numComparisons + rightri.numComparisons;
    extendedPrintEnd(myCallNum, recDepth, left, right, rightri.maxItemInfo, ri.numComparisons);
    return ri;
  }


  public static void main(String[] args) {
    /*
    int[] nums = {-1,0,15,2,-3,14};
    BinarySearchETC  ibs  = new BinarySearchETC(nums);
     ibs.maxItemIndex(0,nums.length-1);
    System.out.println("-----");
    BinarySearchETC iibs = new BinarySearchETC(nums);
    iibs.maxItemIndex(1,nums.length-1);
    */

    /*
    int[] nums = {-3,2,8,13,23,27};
    BinarySearchETC  ibs  = new BinarySearchETC(nums);
    System.out.println("returnIndex = "+ibs.binarySearch(0, nums.length-1, 11));
    */

    int[] nums = {-1,0,15,2,-3,14};
    BinarySearchETC  ibs  = new BinarySearchETC(nums);
    ibs.extendedMaxItemIndex(0,nums.length-1);
  }


}
