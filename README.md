# Cplusplus_Template
模板，藉由引數傳遞常數，檢驗型別時間延後。

優點：

在不遺失資訊的狀況下，以引數 Argument 方式傳遞型別，有效的 inline。

藉引數傳遞常數，進行編譯時期運算。

將型別檢驗的時間延後，從不同語境中，構成資訊。


筆者此處分享之前寫安卓手機元件，其中一元件使用了<T>模板型別的經驗！

https://github.com/katesandroidapp/TravelApp/commit/1c5f08a21d281e542c94581bc3bcebf387cc12dd



             class TravelAgentAdapter(private val travelAgentData: List<TravelAgentModel>) :
                RecyclerView.Adapter<TravelAgentAdapter.BindingHolder>() {

                  //...

               ｝


>>>


		class MainPageFragment : BaseFragment<MainPageViewModel, FragmentMainPageBinding>(HomeViewModel::class.java) {

                    //...

                 }
		 
>>>

公用繼承或是帶有 private 或是 protected 關鍵字的保護物件的繼承，並非是 reuse code 的唯一方法！
而樣板 template 這樣的類別搭配通用 generic 的演算法，能成為特殊的樣板類別。

TBD...尚未完成。
